//TO REMOVE DUPLICATES FROM AN UNSORTED ARRAY, HASHMAPS ARE USED
#include<iostream>
using namespace std;
void remove_duplicates(int arr[], int n) {
    int temp[n];
    int i,j=1;
    temp[0]=arr[0];
    for ( i = 0; i < n; i++)
    {
        if(arr[i+1]!=arr[i]){
            temp[j++]=arr[i+1];
        }
    }
    for ( i = 0; i < j-1; i++)
    {
        cout<<temp[i]<<" ";
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
        int arr[n];
        int i;
        cout <<"enter the elements ";
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        
        remove_duplicates(arr,n);
        t=t-1;
    }
    return 0;
}