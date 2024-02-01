n=input()
array=[]
o=0
for i in range (0,int(n)):
    m=input()
    array.append(m.split()[0])
    array.append(m.split()[1])
l=int(array[1])
for j in range(3,len(array)):
    if(j%2==1):
        if(int(array[j])>=int(l)):
            l=array[j]
            o=j-1
print (array[o])
