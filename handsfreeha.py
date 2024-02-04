m=input()
n=input()
mm=m.split()
nn=n.split()
if(nn[0]==mm[1] or mm[0]==nn[1] or nn[0]==nn[1] or mm[0]==mm[1]):
    print("YES")
else:
    print("NO")