#include<stdio.h>
int stack[10],choice,n,x,i,top,size;
void push();
void display();

int main()
{
top=-1;
printf("enter the size of stack:");
scanf("%d",&n);
printf("\n STACK IMPLEMENTATION USING ARRAY\n");
do
{
printf("\n1.PUSH\n2.DISPLAY\n3.exit\n");
printf("\nEnter the choice:");
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
display();
break;
}
case 3:
{
break;
}
default:
{
printf("\nInavlid choice\n");
}}}
while(choice!=4);
return 0;
}
void push()
{
if(top>=n-1)
{
printf("\nstack overflow\n");
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
printf("\nElements in the stack\n");
for(i=top;i>=0;i--)
printf("%d\t",stack[i]);
}
else
{
printf("\nEMPTY STACK\n");
}}
