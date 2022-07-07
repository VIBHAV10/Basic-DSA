#include<iostream>
using namespace std;


void printSubsets(string &s, string curr, int i)
{
    if (i==s.length())
    {
        cout<<curr<<endl;
        return;
    }
    printSubsets(s,curr,i+1);
    printSubsets(s,curr+s[i],i+1);
}
int main()
{
    string s;
    cin>>s;
    printSubsets(s," ", 0);
    return 0;
}