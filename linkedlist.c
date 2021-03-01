//Implementation of Linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head=0;
void create()
{   
    struct node* newnode;
    int item;
    printf("Enter Data\n");
    scanf("%d",&item);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=item;
    newnode->next=0;
    head=newnode;
}
void insertion()
{
    struct node* newnode,*temp;
    temp=head;
    int item;
    if(head==0)
    {
        create();
    }
    else
    {
        printf("Enter Data\n");
        scanf("%d",&item);
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=item;
        newnode->next=0;
        while(temp->next!=0)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void deletion()
{
     struct node* temp;
    struct node* prev;
    temp=head;
    while(temp->next!=0)
    {
        prev=temp;
        temp=temp->next;

    }
    if(temp==head)
    {
        head=0;
        free(temp);
    }
    else{
    prev->next=0;
    free(temp);
    }
}
void display()
{
    struct node *temp;
    temp=head;
    while(temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int key;
    printf("Enter 1 for insertion 2 for deletion 3 for display and 0 to exit");
    scanf("%d",&key);
    while(key!=0)
    {
        switch (key)
        {
            case 1:
                    insertion();
                    break;
            case 2:
                    deletion();
                    break;
            case 3: 
                    display();
                    break;
            default:
                    printf("Invalid Input\n");
                    break;
        }
        printf("Enter 1 for insertion 2 for deletion 3 for display and 0 to exit");
        scanf("%d",&key);
    }
    return 0;
}