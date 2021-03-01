//Implementation of Stack using array

#include<iostream>
using namespace std;
void push();
void pop();
void display();
#define n 100
int arr[n];
int top=-1;



int main()
{
    int key;
    cout<<"Press 1 to Push element"<<endl;
    cout<<"Press 2 to Pop element"<<endl;
    cout<<"Press 3 to Display elements"<<endl;
    cout<<"Press 0 to exit"<<endl;
    cin>>key;
    while(key!=0)
    {
        switch(key)
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
        cout<<"Press 1 to Push element"<<endl;
        cout<<"Press 2 to Pop element"<<endl;
        cout<<"Press 3 to Display elements"<<endl;
        cout<<"Press 0 to exit"<<endl;
        cin>>key;
    }
    return 0;
}
void push()
{   int item;
    if(top==n)
        cout<<"Stack is Full"<<endl;
    else{
        cout<<"Enter data"<<endl;
        cin>>item;
        top++;
        arr[top]=item;
    }
}
void pop()
{
    if(top==-1)
        cout<<"Stack is Empty"<<endl;
    else
        top--;
}

void display()
{
    for(int i=0;i<=top;i++)
        cout<<arr[i];
}