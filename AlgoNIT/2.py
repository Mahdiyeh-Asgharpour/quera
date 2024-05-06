x1, y1, x2, y2 = map(int, input().split())

if x1 == x2:
    print("Vertical")
elif y1 == y2:
    print("Horizontal")
elif abs(x1 - x2) == abs(y1 - y2):
    print("Diagonal")
elif (abs(x1 - x2)-min(abs(x1 - x2), abs(y1 - y2)))== abs(y1 - y2) or abs(x1 - x2) == (abs(y1 - y2)-min(abs(x1 - x2), abs(y1 - y2))):
    print(min(abs(x1 - x2), abs(y1 - y2)))
else:
    print(min(abs(x1 - x2), abs(y1 - y2)))
