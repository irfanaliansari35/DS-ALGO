//Implementation of Queue using Linkedlist
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* front=0;
struct node* rear=0;

void enqueue()
{       
    int item;
    printf("Enter Data\n");
    scanf("%d",&item);
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=item;
    newnode->next=0;
    if(front==0 && rear==0)
        front=rear=newnode;
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}
void dequeue()
{
    struct node* temp;
    
    if(front==0 && rear==0)
    printf("Queue is empty\n");
    else
    {   
        temp=front;
        front=front->next;
        free(temp);
    }
}
void display()
{
    struct node* temp;
    temp=front;
    if(front==0 && rear==0)
    printf("Queue is empty\n");
    else
    {
        while(temp!=0)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
}
int main()
{   int a;
    printf("enter 1 for enqueue 2 for dequeue and 3 for display\n");
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
    printf("enter 1 for enqueue 2 for dequeue and 3 for display\n");
    scanf("%d",&a);
}
    return 0;
}


