n=input()
m=input()
q=-20
x=0
for i in range (q,int(m)+1):
    for j in range(1,int(n)+1):
        x=x+((pow(int(i)+int(j),3))/(pow(int(j),2)))
print(str(int(x)))
