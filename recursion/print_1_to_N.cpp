#include<iostream>
using namespace std;
void 1_to_N(int n){
    if (n==1)
    {
        cout<<"1"<<endl;
        return;
    }
    cout<<n<<" ";
    return N_to_1(n-1);
}
int main(){
    cout<<"Enter the value of N"<<endl;
    int n;
    cin>>n;
    1_to_N(n);
    return 0;
}