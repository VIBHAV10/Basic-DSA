#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next=NULL;
    }
};

void deleteFirst(Node *head)
{
    
    if (head==NULL)
    {
        cout<<"List doesn't exist" <<endl;
        return;
    }
    else
    {
        Node *temp=head->next;
        delete head;
        *head=*temp;
    
    }
}

void printList( Node *head)
{
    Node *curr=head;
    while(curr!=NULL)
    {
        cout<<(curr->data)<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

int main()
{
    Node *head= new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    printList(head);
    deleteFirst(head);
    printList(head);
    return 0;
}