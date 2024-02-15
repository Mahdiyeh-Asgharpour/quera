import math
x=input()
sum=0
# n=int(x)
# while(n>=2):
#     n=int(x)/2
#     sum=sum+1
for i in range(0,int(x)):
    if math.pow(2,int(i))<=int(x):
        sum=sum+1
    else:
        break

print(str(int(sum-1)))
