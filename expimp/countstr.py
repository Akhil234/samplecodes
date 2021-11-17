string=input("enter the string")
word=input("enter the word:")
words=string.split()
count=0
for w in words:
 if(w==word):
    count=count+1
print(count)
