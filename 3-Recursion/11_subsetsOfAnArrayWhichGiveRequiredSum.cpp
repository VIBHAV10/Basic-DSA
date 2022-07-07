#include<iostream>
using namespace std;

int findSubsets(int arr[], int n, int sum)
{
    if (n==0)
        return (sum==0)?1:0;
    return findSubsets(arr, n-1, sum-arr[n-1])+findSubsets(arr, n-1, sum);
}

int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    cin>>sum;
    cout<<sum;
    return 0;
}