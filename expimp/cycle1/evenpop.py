list1=[]
n=int(input("enter the limit:"))
for i in range(n):
 n1=int(input("enter a number"))
 list1.append(n1)
print(list1)
for i in range(0,len(list1)-1):
 if list[i]%2 == 0:
    list1.pop(i)
print(list1)
