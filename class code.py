x=[]
for i in range(1,5001):
    if(99>i>=10):
        x.append(int(i/10))
        x.append(int(i%10))
    elif (999>=i>=100):
        x.append(int(i/100))
        j=i%100
        x.append(int(j/10))
        x.append(int(j%10))
    elif(1000<=i):
        x.append(int(i/1000))
        j=i%1000
        x.append(int(j/100))
        z=j%100
        x.append(int(z/10))
        x.append(int(z%10))
    else:    
        x.append(i)
    
k=input()
print(x[int(k)-1])