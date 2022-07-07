#include<iostream>
using namespace std;

int search(int arr[], int n, int x)
{
    int i;
    for (i=0;i++;i<n)
    {
        if (x==arr[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n, x, i;
    cin>>n;
    int arr[n];
    for (i=0;i++;i<n)
    {
        cin>>arr[i];
    }
    cin>>x;
    cout<<search(arr,n,x);
    return 0;
}