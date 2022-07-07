#include<iostream>
#include<climits>
using namespace std;

struct myStack
{
    int capacity;
    int *arr;
    int top;
    myStack (int c)
    {
        capacity=c;
        arr=new int[capacity];
        top=-1;
    }
    void push(int x)
    {
        if (top==capacity) {cout<<"overflow"; return;}
        top++;
        arr[top]=x;
    }
    int pop()
    {
        if (top==-1) {cout <<"underflow"; return INT_MIN;}
        int res=arr[top];
        top--;
        return res;
    }
    int peek()
    {
        if(top==-1) {cout<<"underflow"; return INT_MIN;}
        return arr[top];
    }
    int size() {return top+1;}
    bool isEmpty() {return (top==-1);}
};