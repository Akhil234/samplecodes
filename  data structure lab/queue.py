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
        printf("
        
        1.insert element to queue\n");
        printf("2.delete element from the queue\n");
        printf("3.display all elements of queue\n");
        printf("4.quit\n");
        printf("enter your choice:");
        switch(choice)
        {
            case1:
            insert();
            break;
            case 2:
            delete();
            break;
            case3:
            display()
            break;
            case 4:
            exit(1);
            default:
            printf("wrong choice")
        }
    }
}
