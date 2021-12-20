a=input("enter the number")
l=a.split(",")
b=list(map(int,l))
print(b)
c=[x for x in b if x%2!=0]
print(c)
