num=int(input("enter the number"))
remainder=0
result=0
n = num
while(num!=0):
  remainder=num%10
  result=result+remainder*remainder*remainder
  num=num//10
if(result==n):
 print("the num is amstrong=",n)
else:
 print("the num is not amstrong=",n)
