#include<bits/stdc++.h>
using namespace std;

int countDigit(int n)
    {
        return floor(log10(n)+1);
    }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<"enter a number"<<endl;
    int n;
    cin>>n;
    cout<<countDigit(n);
    return 0;
}