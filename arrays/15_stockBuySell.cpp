#include<iostream>
using namespace std;
int stockSell(int arr[], int n)
{
    int res=0;
    for (int i = 1; i < n-1; i++)
    {
        if(arr[i]>arr[i-1])
        {
            res+=arr[i]-arr[i-1];
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
    int lol=stockSell(arr,n);
    cout<<lol;
    return 0;


}