#include<iostream>
using namespace std;

void deleting(int arr[], int n, int pos){
    int i, index=pos-1;
    for (i=index;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    cout<<"rearranged array: "<<endl; 
    for ( i=0; i<n-1; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}


int main(){
    int t;
    cout <<"enter the number of test cases ";
    cin>>t;
    while(t>0){
        cout<<"enter the length of the array "; 
        int n; 
        cin>>n;
        int arr[100];
        int i;
        cout <<"enter the elements ";
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        int pos;
        
        cout<<"enter the position you want to delete at ";
        cin>>pos;
        deleting(arr,n,pos);
        t=t-1;
    }
    return 0;
}