#include<stdio.h>

int b[1000];

void merge(int arr[],int ub ,int lb)

{

    int mid=(lb+ub)/2;

    int i=lb;

    int j=mid+1;

    int k=lb;

    while(i<=mid && j<=ub)

    {

        if(arr[i]<arr[j])

        {

            b[k++]=arr[i++];

        }

        else

        {

            b[k++]=arr[j++];

        }

    }

    while (i<=mid){

        b[k++]=arr[i++];

    }

    while(j<=ub){

        b[k++]=arr[j++];

    }

    //copy the array in the original array

    for (int i=lb;i<=ub;i++){

        arr[i]=b[i];

    }

}

void mergeSort(int arr[],int lb,int ub)

{

    //base case

    if (lb==ub){

        return;

    }

    //divide

    int mid=(lb+ub)/2;

    //sort

    mergeSort(arr,lb,mid);

    mergeSort(arr,mid+1,ub);

    //merge

    merge(arr,ub,lb);

    

   

}

int main()

{   

    int n;

    cin>>n;

    

    int arr[1000000];

    for(int i=0;i<n;i++)

    {

        cin>>arr[i];

    }

    mergeSort(arr,0,n-1);


     for(int i=0;i<=n;i++)

    {

        cout<<arr[i]<<" ";

    }

    

    return 0 ;

}