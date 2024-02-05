import math
array=[]
for i in range (0,4):
    x=input()
    
    array.append(x.split()[0])
    array.append(x.split()[1])
    array.append(x.split()[2])
max=0
l=0
for j in range (0, int(len(array))):
    if(int(array[j])>=int(max)):
        max=int(array[j])
        l=j

if ((int(l)%3)==0):
    print(str((math.ceil(int(l)/3))+1))
else:
    print(str(math.ceil(int(l)/3)))
