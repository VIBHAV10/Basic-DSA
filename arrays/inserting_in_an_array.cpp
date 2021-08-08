#include<iostream>
using namespace std;

void inserting(int arr[], int n, int x, int pos){
    int i,j;
    for (i=n-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1]=x;
    cout<<"rearranged array: "<<endl; 
    for ( j = 0; j <=n; j++)
    {
        cout<<arr[j]<<" ";
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
        int x,pos;
        cout<<"enter the element you want to insert ";
        cin>>x;
        cout<<"enter the position you want to insert at ";
        cin>>pos;
        inserting(arr,n,x, pos);
        t=t-1;
    }
    return 0;
}