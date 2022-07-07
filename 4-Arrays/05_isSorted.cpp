#include<iostream>
using namespace std;
bool isSorted(int arr[],int n)
{
    int i=0;
    for(i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    cout<<isSorted(arr,n);
    return 0;
}