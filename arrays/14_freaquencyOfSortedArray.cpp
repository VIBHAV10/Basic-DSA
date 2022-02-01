#include<iostream>
using namespace std;

void freaquency(int arr[], int n)
{
    int freq=1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i]!=arr[i-1])
        {
            cout<<arr[i-1]<<" "<<freq<<endl;
            freq=1;
        }
        else
        {
            freq++;
        }
    }
    cout<<arr[n-1]<<" "<<freq<<endl;
    
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
    freaquency(arr,n);
    return 0;
    
}