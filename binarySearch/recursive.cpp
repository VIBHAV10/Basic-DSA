#include<iostream>
#include<vector>
using namespace std;

int recursiveBinarySearch(vector<int>v, int low, int high, int x)
{
    int mid=(low+high)/2;
    if(low>high) return -1;
    if(v[mid]==x) return mid;
    else if (v[mid]>x) return recursiveBinarySearch(v,low,mid-1,x);
    else return recursiveBinarySearch(v,mid+1,high,x);
}
int main()
{
    vector<int>v={1,2,3,4,5,6,7,8,9,14};
    cout<<recursiveBinarySearch(v,0,v.size()-1,10);
    return 0;
}