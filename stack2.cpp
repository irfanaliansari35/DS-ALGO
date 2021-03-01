//Stack implementation using Linkedlist
#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node* link;
};
struct node* top=0;
void push()
{   
    int item;
   printf("Enter Data\n");
   scanf("%d",&item);
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=item;
    newnode->link=top;
    top=newnode;
}
void pop()
{
    struct node* temp;
    temp=top;
    if(top==0) printf("Stack is empty\n");
    else
    {
        top=top->link;
        delete(temp);
    }
}
void display()
{
    struct node* temp=top;
    if(temp==0) printf("Stack is Empty\n");
    else{
        while(temp!=0)
        {
            printf("%d",temp->data);
            temp=temp->link;
        }
    }
}
int main()
{  
     int a;
    printf("press 1 for push and 2 for pop and 3 for display\n");
    scanf("%d",&a);
    while(a!=0)
    {   switch (a)
    {
    case 1:
            push();
        break;
    case 2: 
            pop();
            break;
    case 3: 
            display();
            break;
    
    default:
        break;
    }
    printf("press 1 for push and 2 for pop and 3 for display\n");
    scanf("%d",&a);   
    
    }
    return 0;
}