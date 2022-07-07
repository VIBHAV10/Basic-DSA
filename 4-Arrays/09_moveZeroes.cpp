//ONLY DELETES THE FIRST OCCURANCE OF AN ELEMENT


#include<iostream>
using namespace std;

void zeroes_at_the_end(int arr[], int n){
    int count=0,i;
    for (i=0;i<n;i++){
        
        if(arr[i]!=0){
            int temp;
            temp=arr[count];
            arr[count]=arr[i];
            arr[i]=temp;

            count++;
        }
    }
   
    cout<<"rearranged array: "<<endl; 
    for ( i=0; i<n; i++)
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
        zeroes_at_the_end(arr,n);
        t=t-1;
    }
    return 0;
}