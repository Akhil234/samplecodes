x=input("the first set is:")
s1=set(x)
y=input("the second set is:")
s2=set(y)
z=s2.difference(s1)
s3=s2.union(s1)
s4=s1.intersection(s2)
s5=s1.update(s2)
s6=s1.symmetric_difference(s2)
s7=s1.issubset(s2)
s8=s1.issuperset(s2)
print(z)
print(s3)
print(s4)
print(s5)
print(s6)
print(s7)
print(s8)

