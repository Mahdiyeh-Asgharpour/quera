from math import factorial
d = input().split("/")
x = int(input())
day = int(d[0])
month = int(d[1])
y = factorial(day * month)
count = str(y).count(str(x))
print(count)
