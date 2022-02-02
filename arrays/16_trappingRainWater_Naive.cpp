#include<iostream>
using namespace std;

int largest(int arr[], int x, int y)
{
    int res=arr[x];
    for (int i = x; i <y; i++)
    {
        if(arr[i]>=res)
        {
            res=arr[i];
        }
    }
    return res;
}


int waterCollected(int arr[], int n)
{
    int wc=0;
    int height=0;
    for(int i=1; i<n-1;i++)
    {
        int lmax=largest(arr,0,i);
        int rmax=largest(arr,i+1,n);
        height=min(lmax, rmax);
        if(height>arr[i])
        {
            wc+=height-arr[i];
        }
    }
    return wc;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<waterCollected(arr,n);
    return 0;
}