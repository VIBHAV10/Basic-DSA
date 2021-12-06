#include<bits/stdc++.h>
using namespace std;

// O(n) solution
/*
bool isPrime(int n)
{
    if (n==1) {return false;}
    int i;
    for (i=2;i<n;i++)
    {
        if(n%i==0){return false;}
    }
    return true;
}

// O(root(n)) solution
bool isPrime(int n)
{
    if (n==1) {return false;}
    int i;
    for (i=2;i*i<n;i++)
    {
        if(n%i==0){return false;}
    }
    return true;
}
*/

//most efficient solution O(root(n)) but takes thrice as less time compared to the previous solution
bool isPrime(int n)
{
    if (n==1) return false;
    if (n==2 || n==3) return true;
    if (n%2==0 || n%3==0) return false;
    for (int i=5; i*i<=n; i=i+6)
        if (n%i==0 || n%(i+2)==0)
            return false;
    return true;
}
