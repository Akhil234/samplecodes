l1=[10,20,30,40]
l2=[10,20,30,50]
s=0
p=0
print(l1)
print(l2)
print(len(l1))
print(len(l2))
if len(l1)==len(l2):
 print("same length")
else:
 print("not same length")
for i in range(0,len(l1)):
 s=s+l1[i]
print(s)
for i in range(0,len(l2)):
 p=p+l2[i]
print(p)
if(s==p):
 print(" sum is same")
else:
 print(" sum is not same")
