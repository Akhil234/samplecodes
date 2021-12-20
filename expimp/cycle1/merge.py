dict1={}
dict2={}
n=int(input("enter the limit:"))
for i in range(n):
 key1=input("enter the 1 key:")
 value1=input("enter the 1 value:")
 dict1[key1]=value1
print(dict1)
for j in range(n):
 key2=input("enter the 2 key:")
 value2=input("enter the 2 value:")
 dict2[key2]=value2
print(dict2)
dict1.update(dict2)
print(dict1)
