#include<stdio.h>

#define MAX 50

void insert();
void delete();
void display();
int queue_array[MAX];
int rear=-1;
int front=-1;
main()
{
    int choice;
    while(1)
    {
        printf("1.insert element to queue\n");
        printf("2.delete element from the queue\n");
        printf("3.display all elements of queue\n");
        printf("4.quit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case3:
            display()
            break;
            case 4:
            exit(0);
            default:
            printf("wrong choice");
        }
    }
}

void insert()
{
    int add_item;
    if(rear==MAX-1)
    printf("queue overflow\n");
    else
{
    if(front==-1)
    front=0;
    printf("insert the element in the queue:");
    scanf("%d",&add_item);
    rear=rear+1;
    queue_array[rear]=add_item;
}
}
void delete()
{
    if(front==-1||front>rear)
    {
    printf("queue underflow");
    return;
    }
    else
    {
        printf("enter the element to delete");
        front=front+1;
    }
return ;
}
void display()
{
    int i;
    if(front ==-1)
    printf("queue is empty:\n");
    else
    {
    printf("enter the elemeents in the queue:");
    for(i=front;i<=rear;i++)
    printf("%d",queue_array[i]);
    printf("\n");
    }
}
