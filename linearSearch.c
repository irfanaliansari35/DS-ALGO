//Linear Search
#include<stdio.h>
void search(int arr[],int n,int key)
{
    int flag=-1;
    int pos;
    for(int i=0;i<n;i++)
     if(arr[i]==key)
    {
        pos=i+1;
        flag=1;
    }
    if(flag==1) printf("Element found at %d position\n",pos);
    else printf("Element Not Found\n");

}

int main()
{
    int n,key;
    printf("Enter the size of Array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in array");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter element you want to search");
    scanf("%d",&key);
    search(arr,n,key);
    return 0;
}