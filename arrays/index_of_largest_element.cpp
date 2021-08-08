#include<iostream>
using namespace std;

void largest_element(int arr[], int n){
    int i, largest,index;
    largest=arr[0],index=0;
    for( i = 1; i <n; i++)
    {
        if(arr[i]>largest){
            largest=arr[i];
            index=i;
        }
    }
    cout<<"largest element is "<<largest<<" at position "<< index+1<<endl;    
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
        
        largest_element(arr,n);
        t=t-1;
    }
    return 0;
}