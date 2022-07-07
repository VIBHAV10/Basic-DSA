#include<iostream>
#include<climits>
using namespace std;

struct Node
{
    Node* next;
    int data;
    Node (int x)
    { 
        next=nullptr;
        data=x;
    }
};

struct myStack
{
    Node *head;
    int size;
    myStack()
    {
        head=nullptr;
        size=0;
    }

    void push(int x)
    {
        Node* temp=new Node(x);
        temp->next=head;
        head=temp;
        size++;
    }

    int pop()
    {
        if(head==nullptr) {cout<<"underflow"; return INT_MIN;}
        int res=head->data;
        Node* temp=head;
        head=head->next;
        delete temp;
        size--;
        return res;
    }

    int size() {return size;}

    bool isEmpty()
    {
        return (head==nullptr);
    }

    int peek() 
    { 
        if (head==nullptr) {cout <<"underflow"; return INT_MIN;}    
        return (head->data);
    }
};