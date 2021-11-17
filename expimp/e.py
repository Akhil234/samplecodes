list1=[]
n=int(input("enter the limit:"))
for i in range(n):
 a=int(input("enter the number:"))
 list1.append(a)
l=[]
for i in range(0,len(list1)):
 if list1[i]%2 !=0 :
   l.append(list1[i])
print(l)

