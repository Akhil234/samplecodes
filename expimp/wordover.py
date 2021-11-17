list=[10,23,456,45,99]
print(list)
print(len(list))
a="over"
for i in range(0,len(list)):
 if(list[i]>100):
   print("over")
   list[i] = a
 else:
   print(list[i])
print(list)

