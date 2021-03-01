#include<stdio.h>

#define n 100
int arr[n];
int front=-1;
int rear=-1;

void enqueue()
{   
    int item;
    if(((rear+1)%n)==front)
    printf("Queue is Full\n");
    else if(front==-1 && rear==-1)
    {   
        printf("Enter Data\n");
        scanf("%d",&item);
        front=rear=0;
        arr[rear]=item;
    }
    else
    {
        printf("Enter Data\n");
        scanf("%d",&item);
        rear=(rear+1)%n;
        arr[rear]=item;
    }
}
void dequeue()
{
    if(front==-1 && rear==-1)
    printf("Queue is Empty\n");
    else if(front==rear)
        front=rear=-1;
    else
        front=(front+1)%n;
        front--;
}
void display()
{
    int i=front;
    if(front==-1 && rear==-1)
    {
        printf("Queue is Empty\n");
    }    
    else 
    {   
        while(i!=rear)
        {
            printf("%d",arr[i]);
            i=(i+1)%5;
        }
    }
}
int main()
{
    
     int a;
    printf("enter 1 for enque 2 for deque 3 for display and 0 to exit\n");
    scanf("%d",&a);
    while(a!=0)
    {
        switch (a)
        {
            case 1:
                    enqueue();
                    break;
            case 2: 
                dequeue();
                break;
            case 3:
                display();
                break;
    
            default:
            printf("Wrong Input");    
        }
           printf("enter 1 for enque 2 for deque 3 for display and 0 to exit\n");
            scanf("%d",&a);
    }
   return 0;
}