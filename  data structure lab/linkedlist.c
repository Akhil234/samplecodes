#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
}
void insert();
void display();
void insert_beg();
void insert_end();
void insert_middle();
void delete_beg();
void delete_end();
void delete_middle();
void traversal();

void main()

{
int item;
int choice=0;
while(choice!=9)
{

printf("1.enter the 1 for insertion");
printf("2.enter 2 for display:");
printf("3.enter 3 for deletion:");
printf("5.enter 5 for insertion middle:");
printf("6.enter 6 for insertion end:");
printf("7.enter 7 for deletion end:");
printf("8.enter 8 for deletion middle:");
printf("4.enter 4 for traversal:");
printf("9.enter 9 for deletion:");
printf("enter the choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
 insert();
 break();
}
case 2:
{
 display();
 break();
}
case 3:
{
 deletion();
 break();
}
case 4:
{
 traversal();
 break();
}
case 5:
{
insert_middle();
break();
}
case 6:
{
insert_end();
break();
}
case 7:
{
deletion_end();
break();
}
case 8:
{
deletion_middle();
break();

}
case 9:
{
exit(0);
break;
default:
printf("enter the valid choice");
}
}
}

void insert()
{
int item;
struct node*temp;
temp=(struct node*)malloc(sizeof(struct node*))
if(temp==NULL)
{
printf("overflow");
}
else
{
printf("enter the item to insert:");
scanf("%d",&item);
head=temp;
temp->data=item;
temp->next=head;
head=temp;
printf("node inserted");
}
void insert_last()
{
struct node*temp*newnode;
int item;
newnode=node*)malloc(sizeof(struct node));
if(temp==NULL)
{
printf("overflow");
}
else
{
ptr=head;
ptr->data=item;
while(ptr=NULL&&ptr->next!=NULL)
{
ptr=ptr->next;
}
ptr->next=newnode;
newnode->next=NULL;
printf("node inserted");
}
}
}
void display()
{
struct node*temp;
head==temp;
if(temp==NULL)
{
printf("overflow");
}
else
{
while(temp!=NULL)
{
printf("%d-->",temp->data);
temp=temp->next;
}
}













}

