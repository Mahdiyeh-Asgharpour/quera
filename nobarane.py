x=input()
y=0
z=[]
z.append(x.split())
for i in range(0,5):
    if(int(z[0][i])>=80):
        y=y+1
if(y>=3):
    print("Mamma mia!")
elif(1<=y<=2):
    print("Mamma mia!!")
else:
    print("Mamma mia!!!")
