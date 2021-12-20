list=[]
n=int(input("enter the limit of list "))
for i in range(n):
 n1=int(input("enter the number"))
 list.append(n1)
print(list)
newlist=[]
for i in list:
 if(i>=0):
  newlist.append(i)
print(newlist)
 
