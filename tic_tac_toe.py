import cv2
import numpy as np

EMPTY_WHITE_RATIO_THR = 0.03
MIN_CONTOUR_AREA_FRAC = 0.04
CIRCULARITY_THR      = 0.70
ASPECT_THR           = 0.25
DIAG_ENERGY_THR      = 0.55
BOTH_DIAG_MIN_SHARE  = 0.18

def check_state(image_path: str) -> str:
    img = cv2.imread(image_path)
    if img is None:
        raise ValueError("Image not found or path is incorrect.")
    gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
    h, w = gray.shape
    cell_h, cell_w = h // 3, w // 3
    board = []
    for i in range(3):
        row = []
        for j in range(3):
            roi = gray[i*cell_h:(i+1)*cell_h, j*cell_w:(j+1)*cell_w]
            symbol = classify_cell(roi)
            row.append(symbol)
        board.append(row)
    return _check_winner(board)

def _check_winner(board):
    for i in range(3):
        if board[i][0] == board[i][1] == board[i][2] != '':
            return f"{board[i][0]} Wins"
    for j in range(3):
        if board[0][j] == board[1][j] == board[2][j] != '':
            return f"{board[0][j]} Wins"
    if board[0][0] == board[1][1] == board[2][2] != '':
        return f"{board[0][0]} Wins"
    if board[0][2] == board[1][1] == board[2][0] != '':
        return f"{board[0][2]} Wins"
    for i in range(3):
        for j in range(3):
            if board[i][j] == '':
                return "Ongoing"
    return "Draw"

def classify_cell(cell_gray: np.ndarray) -> str:
    h, w = cell_gray.shape
    m = int(0.1 * min(h, w))
    roi = cell_gray[m:h-m, m:w-m] if min(h, w) > 2*m else cell_gray
    roi_blur = cv2.GaussianBlur(roi, (5, 5), 0)
    _, bw = cv2.threshold(roi_blur, 0, 255, cv2.THRESH_BINARY_INV + cv2.THRESH_OTSU)
    white_ratio = np.count_nonzero(bw) / bw.size
    if white_ratio < EMPTY_WHITE_RATIO_THR:
        return ''
    if looks_like_O(bw):
        return 'O'
    if looks_like_X(roi_blur):
        return 'X'
    if hough_like_X(roi_blur):
        return 'X'
    return 'O'

def looks_like_O(bw: np.ndarray) -> bool:
    H, W = bw.shape
    area_img = H * W
    kernel = np.ones((3, 3), np.uint8)
    bw_clean = cv2.morphologyEx(bw, cv2.MORPH_OPEN, kernel, iterations=1)
    contours, hierarchy = cv2.findContours(bw_clean, cv2.RETR_CCOMP, cv2.CHAIN_APPROX_SIMPLE)
    if hierarchy is None:
        return False
    hierarchy = hierarchy[0]
    for idx, cnt in enumerate(contours):
        area = cv2.contourArea(cnt)
        if area < MIN_CONTOUR_AREA_FRAC * area_img:
            continue
        peri = cv2.arcLength(cnt, True)
        if peri == 0:
            continue
        circularity = 4 * np.pi * area / (peri * peri)
        x, y, w, h = cv2.boundingRect(cnt)
        aspect_err = abs(1.0 - (w / (h + 1e-6)))
        child_idx = hierarchy[idx][2]
        has_hole = (child_idx != -1)
        if circularity > CIRCULARITY_THR and aspect_err < ASPECT_THR:
            if has_hole:
                return True
            if area > 0.08 * area_img:
                return True
    return False

def looks_like_X(roi_blur: np.ndarray) -> bool:
    gx = cv2.Sobel(roi_blur, cv2.CV_32F, 1, 0, ksize=3)
    gy = cv2.Sobel(roi_blur, cv2.CV_32F, 0, 1, ksize=3)
    mag = np.sqrt(gx*gx + gy*gy) + 1e-6
    ang = (np.arctan2(gy, gx) * 180.0 / np.pi) % 180.0
    thr = np.percentile(mag, 75)
    mask = mag > thr
    if np.count_nonzero(mask) < 50:
        return False
    ang_sel = ang[mask]
    mag_sel = mag[mask]
    def bin_share(center, width=22.5):
        low = (center - width) % 180.0
        high = (center + width) % 180.0
        if low < high:
            idx = (ang_sel >= low) & (ang_sel < high)
        else:
            idx = (ang_sel >= low) | (ang_sel < high)
        return float(np.sum(mag_sel[idx]))
    e0   = bin_share(0.0)
    e45  = bin_share(45.0)
    e90  = bin_share(90.0)
    e135 = bin_share(135.0)
    etot = e0 + e45 + e90 + e135 + 1e-6
    s0, s45, s90, s135 = e0/etot, e45/etot, e90/etot, e135/etot
    diag_share = s45 + s135
    if diag_share > DIAG_ENERGY_THR and s45 > BOTH_DIAG_MIN_SHARE and s135 > BOTH_DIAG_MIN_SHARE:
        if max(s0, s90) < 0.28:
            return True
    return False

def hough_like_X(roi_blur: np.ndarray) -> bool:
    edges = cv2.Canny(roi_blur, 50, 150, apertureSize=3, L2gradient=True)
    lines = cv2.HoughLinesP(edges, rho=1, theta=np.pi/180, threshold=40,
                            minLineLength=min(roi_blur.shape)//2, maxLineGap=10)
    if lines is None or len(lines) < 2:
        return False
    H, W = roi_blur.shape
    cx, cy = W/2.0, H/2.0
    def line_angle_deg(x1, y1, x2, y2):
        return (np.degrees(np.arctan2(y2 - y1, x2 - x1)) + 180.0) % 180.0
    diag1, diag2 = False, False
    for l in lines.reshape(-1, 4):
        x1, y1, x2, y2 = l
        ang = line_angle_deg(x1, y1, x2, y2)
        if min(abs(ang - 45), abs(ang - 135)) < 15:
            A = y2 - y1
            B = -(x2 - x1)
            C = (x2 - x1)*y1 - (y2 - y1)*x1
            dist = abs(A*cx + B*cy + C) / (np.sqrt(A*A + B*B) + 1e-6)
            if dist < 0.15 * min(H, W):
                if abs(ang - 45) < 15:
                    diag1 = True
                if abs(ang - 135) < 15:
                    diag2 = True
    return diag1 and diag2

if __name__ == "__main__":
    path = "Ongoing.png"
    result = check_state(path)
    print(result)
