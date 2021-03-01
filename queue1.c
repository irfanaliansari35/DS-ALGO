//Implementation of Queue using array
#include<stdio.h>
#define n 100
int arr[n];
int front=-1;
int rear=-1;
void enqueue()
{   int item;
    if(rear==n-1)
        printf("Queue is Full\n");
    else if(front==-1 && rear==-1)
    {   
        printf("Enter Data\n");
        scanf("%d",&item);
        front=rear=0;
        arr[rear]=item;
    }
    else{
        printf("Enter Data\n");
        scanf("%d",&item);
        arr[++rear]=item;
    }
}
void dequeue()
{
    if(front==-1 && rear==-1)
        printf("Queue is Empty\n");
    else if(front==rear)
        front=rear=-1;
    else front++;
}
void display()
{
    for(int i=front;i<=rear;i++)
    {
        printf("%d",arr[i]);
    }
}
int main()
{   int a;
    printf("enter 1 for enque 2 for deque and 3 for display\n");
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
        printf("wrong input\n");    
    }
    printf("enter 1 for enque 2 for deque and 3 for display\n");
    scanf("%d",&a);
}
    return 0;
}
