a=int(input("enter the year"))
if( (a%400 == 0) or (a%100 != 0)and(a%4 == 0)):
 print("the given year is a leap year")
 print(a)
else:
 print("the given year is not a leap year")
 print(a) 
