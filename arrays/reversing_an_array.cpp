#include<iostream>
using namespace std;
void reverse(int arr[], int n){
    int low=0, high=n-1;
    while(high>low){
        int temp;
        temp=arr[high];
        arr[high]=arr[low];
        arr[low]=temp;
        high--, low++;
    }
    int i;
    for ( i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int t;
    cout <<"enter the number of test cases ";
    cin>>t;
    while(t>0){
        cout<<"enter the length of the array "; 
        int n; 
        cin>>n;
        int arr[n];
        int i;
        cout <<"enter the elements ";
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        
        reverse(arr,n);
        
        t=t-1;
    }
    return 0;
}