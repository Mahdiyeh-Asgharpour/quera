n = int(input())
x=[]
for i in range(1,n):
    if(n%int(i)==0):
        x.append(i)
        for j in range (1,int(i)):
            if(int(i)%int(j)==0):
                if(int(j)!=1):
                    x.remove(i)
                    x.append(j)
                if(int(j)==1):
                    break
print(len(x))
# print(x)