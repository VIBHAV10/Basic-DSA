#include<bits/stdc++.h>
using namespace std;

int trailingZeroes(int n)
{
    int result=0;
    int i;
    for (i=0;i<=n;i=i*5)
    {
        result=result+n/i;
    }
    return result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}