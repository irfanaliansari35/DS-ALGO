//Binary Search Tree
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node* root=0;

struct node* create(int key)
{
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=key;
    newnode->left=newnode->right=NULL;
    return newnode;
}
struct node* insert(struct node* root,int key)
{
    if(root==NULL)
        return create(key);
    if(key<root->data) root->left=insert(root,key);
    else if(key>root->data) root->right=insert(root,key);
    return root;
}
struct node* search(struct node* root,int key)
{
    if(root==NULL || root->data==key) 
        return root;
    if(root->data<key)
        return search(root->right,key);
    else
        return search(root->left,key);
}
void preOrder(struct node* root)
{
    if(root==0) 
        return;
    printf("%d",root->data);
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(struct node* root)
{
    if(root==0) 
        return;
    inOrder(root->left);
    printf("%d",root->data);
    inOrder(root->right);
}
void postOrder(struct node* root)
{
    if(root==0) 
        return;
    postOrder(root->left);
    printf("%d",root->data);
    postOrder(root->right);
}

int main()
{
    root=insert(root,2);
    insert(root,1);
    insert(root,3);
    inOrder(root);
    return 0;
}