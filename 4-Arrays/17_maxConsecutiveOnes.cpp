#include<iostream>
using namespace std;
int maxOnes(int arr[], int n)
{
    int curr=0;
    int res=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==1)
        {
            curr++;
            res=max(res,curr);
        }
        else
        {
            
            curr=0;
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
    cout<<maxOnes(arr,n);
    return 0;
    
}