#include<iostream>
#include<climits>
using namespace std;

struct Queue
{
  int size, capacity;
  int *arr;
  Queue(int x) 
  {
      capacity=x;
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
      arr[size]=x;
      size++;
  }
  void Deque()
  {
      if (isEmpty()) {cout<<"underflow"; return;}
      int i;
      for ( i = 0; i < size-1; i++)
      {
          arr[i]=arr[i+1];
      }
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
      return arr[size-1];
  }
};
