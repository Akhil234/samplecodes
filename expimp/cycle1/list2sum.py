list1=[]
list2=[]

n1=int(input("enter the numbers limit:"))
for i in range(0,n1):
  no1=int(input("enter the numbers"))
  list1.append(no1)
print(list1)

n2=int(input("enter the numbers limit"))
for j in range(0,n2):
  no2=int(input("enter the number"))
  list2.append(no2)
print(list2)
for i in list1:
 for j in list2:
  if(i==j):
    print("the no found in both list is",i)
