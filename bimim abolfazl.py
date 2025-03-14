x=input()
y=""
for i in x:
    if str(i)=="m":
        y="No"
        break
    else:
        y="Yes"
print(y)