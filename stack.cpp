#include<stdio.h>
void push();
void pop();
void display();
int arr[5];
int top=-1;
int main()
{  int top=-1;
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
void push ()
{
    int item;
    printf("Enter Data\n");
    scanf("%d",&item);
    if(top==5)
    {
        printf("Stack is Full");
    }
    else
    {
        top++;
        arr[top]=item;
    }
}
void pop()
{   int item;
    if(top==-1)
    {
        printf("Stack is Empty");
    }
    else
    {
        item=arr[top];
        top--;
    }
    
}
void display()
{
    for(int i=0;i<5;i++)
    {
        printf("%d",arr[i]);

    }
}