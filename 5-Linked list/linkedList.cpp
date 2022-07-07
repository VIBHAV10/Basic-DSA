#include<iostream>
using namespace std;


struct Node
{
    int data;
    Node *next;
    Node (int x)
    {
        data=x;
        next=nullptr;
    }
};

void printLinkedList(Node *head)
{
    Node *curr=head;
    while(curr!=nullptr)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

void recursiveTraversal(Node *head)
{
    if (head==nullptr)
    {
        return;
    }
    cout<<head->data<<" ";
    recursiveTraversal(head->next);
}

Node *insertBeginSLL(Node *head, int x)
{
    Node *temp=new Node(x);
    temp->next=head;
    return temp;
}

void insertEndSLL(Node *head, int x)
{
    if (head==nullptr) {return;}
    Node *temp=new Node(x);
    Node *curr=head;
    while(curr->next!=nullptr)
    {
        curr=curr->next;
    }
    curr->next=temp;
}

Node * deleteFirstSLL(Node *head)
{
    if (head==nullptr)
    {
        return nullptr;
    }
    Node *temp=head;
    temp=temp->next;
    delete head;
    return temp;
}

void deleteLastSLL(Node *head)
{
    if (head==nullptr)
    {
        return;
    }
    Node *curr=head;
    while (curr->next->next!=nullptr)
    {
        curr=curr->next;
    }
    Node *temp=curr->next;
    curr->next=nullptr;
    delete temp;
}

Node* insertAtPosition(Node *head, int x, int pos)
{
    if (head==nullptr) {return nullptr;}
    Node* curr=head;
    for(int i=1;i<pos-1;i++)
    {
        curr=curr->next;
    }
    Node *temp=curr->next;
    curr->next=new Node(x);
    curr->next->next=temp;
    return head;
}

void findMiddle(Node *head)
{
    Node * slow=head, *fast=head;
    while(fast->next!=nullptr && fast->next->next!=nullptr)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    cout<<slow->data<<endl;
}

Node* sortedInsert(Node *head, int x)
{
    if (head==nullptr)
    {
        head=new Node(x);
        return head;
    }
    Node*curr=head;
    while(x>curr->next->data && curr->next!=nullptr)
    {
        curr=curr->next;
    }
    Node *temp=curr->next;
    curr->next=new Node(x);
    curr->next->next=temp;
    return head;
}

//assuming that there are more than N nodes in the linked list
Node* nthNodeFromTheEnd(Node *head, int n)
{
    Node *fast=head, *slow=head;
    for (int i=0;i<n;i++)
    {
        fast=fast->next;
    }
    while(fast!=nullptr)
    {
        fast=fast->next;
        slow=slow->next;
    }
    cout<<slow->data<<endl;
    return slow;
}

Node * reverseLinkedList(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }
    Node* curr=head;
    Node *prev=nullptr, *next=nullptr;
    while(curr!=nullptr)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;        
    }
    return prev;
}

Node* recursiveReverseLL(Node *head)
{    
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }
    Node* rest = recursiveReverseLL(head->next);
    head->next->next = head;
    head->next = nullptr;
    return rest;
}

//remove duplicates from sorted linked list
void removeDuplicates(Node *head)
{
    if (head==nullptr)
    {
        return;
    }
    Node* curr=head, *temp;
    while (curr->next!=nullptr)
    {
        if(curr->data==curr->next->data)
        {
            temp=curr->next;
            curr->next=curr->next->next;
            delete temp;
        }
        else
        {
            curr=curr->next;
        }
    }
}

Node* searchSLL(Node* head, int x)
{
    Node* curr=head;
    while(curr!=nullptr)
    {
        if (curr->data==x)
        {
            return curr;
        }
        else 
        {
            curr=curr->next;
        }
    }
    return nullptr;
}

Node* recursiveSearchSLL(Node *head, int x)
{
    if (head==nullptr)
    {
        return nullptr;
    }
    if(head->data==x)
    {
        return head;
    }
    else
    {
        return recursiveSearchSLL(head->next,x);
    }
}
int main()
{
    Node *head= new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(30);
    head->next->next->next->next=new Node(30);
    head->next->next->next->next->next=new Node(40);
    removeDuplicates(head);
    recursiveTraversal(head);
    cout<<endl;
    

    return 0;
}