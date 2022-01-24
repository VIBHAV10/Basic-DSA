#include<iostream>
using namespace std;

int josephusProblem(int n, int k)
{
    if (n==1) return 1;
    else return (josephusProblem(n-1,k)+k)%n;
}

int main()
{
    int n,k;
    cin>>n>>k;
    cout<<josephusProblem(n,k);
    return 0;
}

// Output: if numbers begin from 1 instead of 0, then just add 1 to the final answer