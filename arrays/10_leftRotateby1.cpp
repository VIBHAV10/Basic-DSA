#include<iostream>
using namespace std;

void leftrotate(int arr[], int n)
{
    int i;
    int temp=arr[0];
    for(i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}

int main()
{
    int n;
    cin>>n;
    int arr[n], i;
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    leftrotate(arr,n);

    for ( i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}