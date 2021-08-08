#include<iostream>
using namespace std;

void second_largest_element(int arr[], int n){
    int res=-1,largest=0,i;
    for(i=1;i<n;i++){
        if(arr[i]>arr[largest]){
            res=largest;
            largest=i;
        }
        else if (arr[i]<=arr[largest]){
            if (res==-1 || arr[i]>arr[res]){
                res=i;
            }
        }
    }
    // if (arr[largest]=arr[res])
    // {
    //     cout<<"all the elements are same"<<endl;
    //     return;
    // }
    cout<<"The largest element is "<<arr[largest]<<" at position "<<largest+1<<endl;  
    cout<<"The second largest element is "<<arr[res]<<" at position "<<res+1<<endl;    
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
        
        second_largest_element(arr,n);
        t=t-1;
    }
    return 0;
}