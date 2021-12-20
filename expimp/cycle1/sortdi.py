n=int(input("enter the limit"))
dict={}
for i in range(n):
 key=int(input("enter key:"))
 value=input("enter value:")
 dict[key]=value
print(dict)
l=list(dict.items())
l.sort()
print("Ascending order is",l)
l=list(dict.items())
l.sort(reverse=True)
print("descending order is",l)
dic3.update(dic2)
print(dic3)
