#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>v, int low, int high, int x)
{
    int mid=(low+high)/2;
    if(low>high) return -1;
    if(v[mid]==x) return mid;
    else if (v[mid]>x) return binarySearch(v,low,mid-1,x);
    else return binarySearch(v,mid+1,high,x);
}
int search(vector<int>v,int x)
{
    if (v[0]==x)
    {
        return 0;
    }
    int i=1;
    while(v[i]<x)
    {
        i=i*2;
    }
    if (v[i]==x) return i;
    else return binarySearch(v,i/2+1,i-1,x);

}


//time complexity:
// log(position) is required by the while loop.
// log(position) is required again by the binary search.
// So the time complexity is O(log(position)) + O(log(position)) = O(log(position))