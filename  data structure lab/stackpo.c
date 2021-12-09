#include<stdio.h>
int stack[50],choice,n,size,top,i,x;
void push();
void pop();
void display();

int main()
{
top=-1;
printf("enter the size of stack");
scanf("%d",&n);
printf("\n stack implentation using array\n");
do
{
printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.exit\n");
printf("enter the choice:");
scanf("%d",&choice);
switch(choice)
{
 case 1:
{
 push();
 break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
case 4:
{
break;
}
default:
{
printf("the choice is invalid");
}
}
}
while(choice!=4);
return 0;
}
void push()
{
if(top>n-1)
{
printf("\n stack overflow\n");
}
else
{
printf("enter the value to be pushed:");
scanf("%d",&x);
top++;
stack[top]=x;
}
}
void display()
{
if(top>=0)
{
printf("\n elements in the stack\n");
for(i=top;i>=0;i--)
printf("%d\t",stack[i]);
}
else
{
printf("\nEMPTY STACK\n");
}
}
void pop()
{
if(top<=-1)
{
printf("empty stack");
}
else
{
printf("enter the value to be popped:");
scanf("%d",&x);
x=stack[top];
top--;
}}
