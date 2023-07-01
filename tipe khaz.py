x=input()
m=[]
q=[]
# n1=[]
# n2=[]
# n3=[]
sum=0
for i in range (0,int(x)):
    a=input()
    n=a.split()
    # if(int(n[0])==1):
    #     n1.append(n[1])
    # if(int(n[0])==2):
    #     n2.append(n[1])
    # if(int(n[0])==3):
    #     n3.append(n[1])  
    m.append(n[0])
    q.append(n[1])

# for k in range(0,int(len(n1))):
#     for i in range(0,int(len(n2))):
#         for j in range(0,int(len(n3))):
#             if(n1[k]!=n2[i]and n1[k]!=n3[j] and n2[i]!=n3[j]):
#                 sum=sum+1



for k in range(0,int(x)):
        if(int(m[k]) ==1):
            for i in range(0,int(len(m))):
                if(int(m[i])==2):
                    for j in range(0,int(len(m))):
                        if(int(m[j])==3):
                            if(q[k] !=q[i] and q[j] !=q[i] and q[k] !=q[j]):
                                sum=sum+1

print(sum)
