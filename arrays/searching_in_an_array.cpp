#include<iostream>
using namespace std;

void searching(int arr[], int n, int x){
    int i;
    for ( i = 0; i <n; i++)
    {
        if(arr[i]==x){
            cout <<"element found "<<endl;
            return;
        }
    }
    cout<<"element not found "<<endl;    
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
        cout <<"enter the elements";
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"enter the element you want to look for ";
        int x;
        cin>>x;
        searching(arr,n,x);
        
        t=t-1;
    }
    return 0;
}