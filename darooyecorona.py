allshekarestan=input()
deadshekarestan=input()
allnamakestan=input()
deadnamakestan=input()
if(int(allshekarestan)-int(deadshekarestan)<int(allnamakestan)-int(deadnamakestan)):
    print("Namakestan")
elif(int(allshekarestan)-int(deadshekarestan)>int(allnamakestan)-int(deadnamakestan)):
    print("Shekarestan")
else:
    print("Equal")