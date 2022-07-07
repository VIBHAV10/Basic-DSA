#include<iostream>
using namespace std;

int maxSumSubArray(int arr[], int n)
{
    int res=arr[0];
    for(int i=0;i<n;i++)
    {
        int curr=0;
        for(int j=i;j<n;j++)
        {
            curr=curr+arr[i];
            res=max(res,curr);
        }
    }
    return res;
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
    cout<<maxSumSubArray(arr,n);
    return 0;

}