#include<iostream>
#include<vector>
#include <climits>
using namespace std;

struct myStack 
{
    vector <int> v;

    void push(int x) { v.push_back(x);}

    int pop()
    {
        if (v.size()==0) {cout<<"underflow"; return INT_MIN;}
        int res=v.back();
        v.pop_back();
        return res;
    }

    int size() { return v.size(); }

    bool isEmpty() {return v.empty();}

    int peek()
    {
        if (v.size()==0) {cout<<"underflow"; return INT_MIN;}
        return v.back();
    }

};