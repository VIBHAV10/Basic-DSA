#include<iostream>
using namespace std;

int removeDuplicates(int arr[], int n)
{
    int i;
    int res=1;
    for(i=1;i<n;i++){
        if(arr[i]!=arr[i-1])
        {
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    int arr[n], i;
    for (i=0;i<n;i++)
    {
        cin>>arr[n];
    }
    int lol;
    lol=removeDuplicates(arr,n);
    //print array
    for (i=0;i<lol;i++)
    {
        cout<<arr[i]<<" ";
    }

}