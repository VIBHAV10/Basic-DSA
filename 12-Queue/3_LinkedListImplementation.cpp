#include <iostream>
#include <climits>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int x)
    {
        data=x;
        next=nullptr;
    }
};

struct Queue
{
    int size;
    Node *front;
    Node* rear;
    Queue()
    {
        size=0;
        front=rear=nullptr;
    }
    void Enque(int x)
    {
        Node* temp= new Node(x);
        if (front==nullptr)
        {
            front=rear=temp;
        }
        rear->next=temp;
        rear=temp;
        size++;
    }
    void Deque()
    {
        if (front=nullptr) { cout<<"empty"; return;}
        Node* temp=front;
        front=front->next;
        if (front==nullptr) 
        {rear=nullptr;}
        delete(temp);
        size--;
    }

    bool isEmpty()
    {
        return(size==0);
    }

    int getRear()
    {
        if (rear==nullptr) {return INT_MIN;}
        return (rear->data);
    }
    int getFront()
    {
        if(front==nullptr) {return INT_MAX;}
        return (front->data);
    }
    int size()
    {
        return (size);
    }
};
