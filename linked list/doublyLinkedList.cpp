#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
    Node* prev;
    Node (int x)
    {
        data=x;
        next=nullptr;
        prev=nullptr;
    }
};

Node* insertAtHead(Node* head, int x)
{
    if (head==nullptr)
    {
        Node* temp=new Node(x);
        return temp;
    }
    Node* temp=new Node(x);
    head->prev=temp;
    temp->next=head;
    return temp;
}
int main()
{
    
}