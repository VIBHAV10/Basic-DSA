//efficient way
#include<iostream>
#include<climits>
using namespace std;

struct Queue
{
  int size, capacity, front;
  int *arr;
  Queue(int x) 
  {
      capacity=x;
      front=0;
      size=0;
      arr=new int[capacity];
  }
  bool isFull()
  {
      return (size==capacity);
  }
  bool isEmpty()
  {
      return (size==0);
  }
  void Enque (int x)
  {
      if (isFull()) {cout <<"overflow"; return;}
      int rear= (front+size-1)%capacity;
      rear= (rear+1)%capacity;
      arr[rear]=x;
      size++;
  }
  void Deque()
  {
      if (isEmpty()) {cout<<"underflow"; return;}
      front=(front+1)%capacity;
      size--;    
  }
  int getFront()
  {
      if (isEmpty()){ return INT_MIN;}
      return arr[0];
  }
  int getRear()
  {
      if (isEmpty()) {return INT_MIN;}
      int rear= (front+size-1)%capacity;
      return arr[rear];
  }
};
