#include<iostream>
using namespace std;

void leaders(int arr[], int n)
{
    int currLeader=arr[n-1];
    cout<<currLeader<<" ";
    for (int i=n-2;i>=0;i--)
    {
        if(arr[i]>currLeader)
        {
            currLeader=arr[i];
            cout<<currLeader<<" ";
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    leaders(arr,n);
    
}