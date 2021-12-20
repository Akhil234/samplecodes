n=input("enterstring").split()
a,b=n
print(a.replace(a[0],b[0],1)+b.replace(b[0],a[0],1))
