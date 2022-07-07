#include<iostream>
#include<stack>
#include <string>
using namespace std;

bool isMatching(char a, char b)
{
    return ((a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']'));
}

bool isBalanced (string str)
{
    stack <int> s;
    int i;
    for (i = 0; i < str.length(); i++)
    {
        if (str[i]=='(' || str[i]=='{' || str[i]=='[')
        {
            s.push(str[i]);
        }
        else
        {
            if (s.empty())
            {
                return false;
            }
            else if (isMatching(s.top(),str[i])==false)
            {
                return false;
            }
            else
            {
                s.pop();
            }
        }
    }
    return(s.empty()==true);   
}



int main()
{
    //driver code
    string s="[[{{(())}}]]";
    cout<<isBalanced(s);
    return 0;
}