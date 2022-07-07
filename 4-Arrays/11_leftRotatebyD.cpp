#include<iostream>
using namespace std;



void reverse(int arr[], int x, int y){
    int low=x, high=y;
    while(high>low)
    {
        int temp;
        temp=arr[high];
        arr[high]=arr[low];
        arr[low]=temp;
        high--, low++;
    }  
}

void leftRotateByD(int arr[], int n, int d)
{
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
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

    int d;
    cin>>d;

    leftRotateByD(arr, n, d);
    for ( i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}