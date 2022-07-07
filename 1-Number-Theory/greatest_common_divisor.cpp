// iterative approach
#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b)
{
    while(a!=b)
    {
        if (a>b) {a=a-b;}
        else {b=b-a;}
        return a;
    }
}

// optimised approach
/*
int GCD(int a, int b)
{
    if (b==a) {return a;}
    else GCD(b,b%a);
}
*/