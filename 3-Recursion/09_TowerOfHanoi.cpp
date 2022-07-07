#include<iostream>
using namespace std;


void TOH(int n, string &A,string &B,string &C)
{
    if (n==1)
    {
        cout<<"Move disk 1 from "<<A<<" to "<<C<<endl;
        return;
    }
    TOH(n-1,A,C,B);
    cout<<"Move disk "<<n<<" from "<<A<<" to "<<C<<endl;
    TOH(n-1,B,A,C);
}
int main()
{
    int n; cin>>n;
    string A="A",B="B",C="C";
    TOH(n,A,B,C);
    return 0;
}