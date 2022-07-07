#include<iostream>
#include<limits.h>
using namespace std;

int largestElement(int arr[], int n)
{
    int i, max=0;
    int pos=0;
    for (i=0;i<n;i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
            pos=i;
        }
    }
    return pos+1;

}
int main()
{
    int n;
    cin>>n;
    int arr[n], i;
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<largestElement(arr,n)<<endl;
    return 0;
}