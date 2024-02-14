x=input()
y=input()
xx=[]
yy=[]
sum=0
xx.append(x.split())
yy.append(y.split())
for i in range(0,int(len(xx[0]))):
    if(xx[0][i]=='1' and yy[0][i]=='1'):
        sum=sum+1
print(sum)

