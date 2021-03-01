//Binary Search 
#include<stdio.h>

int BinarySearch(int arr[],int n,int key)
{
    int l=0;
    int u=n-1;
    int mid;
    while(l<u)
    {
        mid=(l+u)/2;
        if(arr[mid]==key)
            return mid+1;
        else if(arr[mid]<key)
            l=mid+1;
        else
            u=mid-1;
    }
    return -1;
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
    int pos=BinarySearch(arr,n,key);
    if(pos==-1) printf("Element not found\n");
    else printf("Element found at %d position\n",pos);
    return 0;
}