 #include<stdio.h>  
    #include<stdlib.h>  
    struct node   
    {  
        int data;  
        struct node *next;   
    };  
    struct node *head,*temp;  
      
    void insert (); 
    void lastinsert();  
    void display(); 
    void insertrand();
    void main ()  
    {  
        int choice =0;  
        while(choice != 4)   
        {  
            printf("\n\n*********Main Menu*********\n");  
            printf("\nChoose one option from the following list ...\n");  
            printf("\n===============================================\n");  
            printf("\n1.Insert in begining\n2.Insert at display\n3.Insert last in location\n4.insert random 5.Delete from last\n6.Delete node after specified location\n7.Search an element\n8.Show\n9.Exit\n");  
            printf("\nEnter your choice?\n");         
            scanf("%d",&choice);  
            switch(choice)  
            {  
                case 1:  
                insert();      
                break;  
                case 2:  
                display();       
                break; 
               case 3:
               lastinsert();
               break; 
               case 4:
               insertrand();
               break;
                case 5:  
                exit(0);         
                break; 
              default:
       printf("the wrong choice:");
}
}
}
 
void insert()
{
int item;
struct node*temp;
temp=(struct node*)malloc(sizeof(struct node*));
if(temp==NULL)
{
printf("overflow");
}
else
{
printf("enter the item to insert:");
scanf("%d",&item);
temp->data=item;
temp->next=head;
head=temp;
printf("node inserted");
}
}
void lastinsert()
{
struct node*new,*ptr;
int item;
new=(struct node*)malloc(sizeof(struct node));
if(new==NULL)
{
printf("over");
}
else
{
printf("enter the item:");
scanf("%d",&item);
new->data=item;
ptr=head;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
ptr->next=new;
new->next=NULL;
}
}
void insertrand()
{
struct node*temp,*new;
new=(struct node*)malloc(sizeof(struct node));
int item,pos,i;
if(new==NULL)
{
printf("overflow");
}
else
{
printf("enter the item to insert");
scanf("%d",&item);
printf("enter the position to insert");
scanf("%d",&pos);
new->data=item;
for(i=0;i<pos-1;i++)
{
temp=temp->next;
if(temp==NULL)
{
 printf("cannot insert");
 return;
}
new->next=temp->next;
new->next=temp;
printf("node inserted");
}
}
}
void display()
{
struct node *temp;
temp=head;
if(temp==NULL)
{
printf("overflow");
}
else
{
printf("elements");
while(temp!=NULL)
{
printf("%d-->",temp->data);
temp=temp->next;
}
}
}






































