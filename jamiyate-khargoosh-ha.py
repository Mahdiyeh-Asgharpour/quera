x=[]
y=input()
x.append(y.split())
z=input()
a=int(x[0][0])
for j in range(0,int(z)):
    a=int(a)*2-int(x[0][1])
print(a)