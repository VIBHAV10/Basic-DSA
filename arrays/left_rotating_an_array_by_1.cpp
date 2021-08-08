#include<iostream>
using namespace std;
void LRB_1(int arr[], int n){
    int temp=arr[0];
    int i;
    for ( i=0; i<n-1; i++)
    {
        arr[i]=arr[i+1];        
    }
    arr[n-1]=temp;
    cout<<"rearranged array: "<<endl; 
    for ( i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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
        
        LRB_1(arr,n);
        
        t=t-1;
    }
    return 0;
}