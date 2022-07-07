#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int deleteElement(int arr[],int n, int pos)
{
    int place=pos-1, i=0;
    for(i=place;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    return n-1;
}
int main()
{
    int n,i,pos;
    cin>>n;
    int arr[n];
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>pos;
    n=deleteElement(arr,n,pos);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}