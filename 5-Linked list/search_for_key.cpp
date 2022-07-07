#include<iostream>
using namespace std;


struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data =x;
        next=nullptr;
    }
};


void searchList( Node *head, int key)
{
    Node *curr=head;
    int count=0;
    while(curr!=nullptr)
    {
        if((curr->data)==key)
        {
            cout<<"The key is found at position "<<count+1;
            return;
        }
        else
        {
            count++;
            curr=curr->next;
        }
        
    }
    cout<<"key could not be found"<<endl;
    
}
int main()
{
    Node *head= new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    int key;
    cout<<"Enter the key to be searched"<<endl;
    cin>>key;
    searchList(head, key);
    return 0;
}