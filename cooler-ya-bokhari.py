z=input()
x=input()
y=[]
y.append(x.split())
for i in range(0,int(z)):
    if(int(y[0][i])>15):
        print("cooler")
    else:
        print("heater")