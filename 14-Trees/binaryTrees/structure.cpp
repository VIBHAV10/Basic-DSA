#include<iostream>
using namespace std;

struct tree{
    int data;
    tree* left;
    tree* right;
    tree(int x)
    {
        data=x;
        left=right=nullptr;
    }
};