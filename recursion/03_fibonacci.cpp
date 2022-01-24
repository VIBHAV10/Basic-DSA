#include<iostream>
using namespace std;

int printFibonacci(int n)
{
    if (n==0) { return 0;}
    if (n==1) { return 1;}
    return printFibonacci(n-1)+printFibonacci(n-2);
}

int main()
{
    int n;
    cin>>n;
    int count=0;
    while(count<=n)
    {
        cout<<printFibonacci(count++)<<" ";
    }
    return 0;
}