//Coding Solution For MAR
//Name: Irfan Ali Ansari
//University Roll No. : 16900219038
//Department : Information Technology
//Year : 2nd (4th sem)

//Problem :- Fractional Knapsack

#include<bits/stdc++.h>
 using namespace std;
 
struct Item{
    int value;
    int weight;
};
 
 class myComp{
    public:
    bool operator() (Item A,Item B){
        return A.value * B.weight > B.value * A.weight;
    }
};
 double fractionalKnapsack(int W, Item arr[], int n)
    {
       
       sort(arr,arr+n, myComp());
       
       int wt=0;
       double ans=0;
       
       for(int i=0;i<n;i++)
       {
           if(wt + arr[i].weight<=W)
           {
               ans+=arr[i].value;
               wt+=arr[i].weight;
           }
           else{
               double x = (double)arr[i].value/arr[i].weight;
               ans+=(x*(W-wt));
               
               break;
           }
       }
        return ans;
    }


int main()
{
    int n,W;
    cout<<"Enter No of items and capacity of Knapsack"<<endl;
    cin>>n>>W;
    cout<<"Enter "<<n<<" Items with weight and value"<<endl;
    Item arr[n];
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        
        arr[i].weight=x;
        arr[i].value=y;
    }
    cout<<fractionalKnapsack(W,arr,n)<<endl;

    return 0;
}
