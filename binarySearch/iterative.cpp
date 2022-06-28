#include<iostream>
#include<vector>
using namespace std;

int iterativeBinarySearch(vector<int>v, int x)
{
    int n=v.size();
    int low=0,high=n-1;
    while(high>=low)
    {
        int mid=(high+low)/2;
        if(v[mid]==x) return mid;
        else if (v[mid]>x) {high=mid-1;}
        else {low=mid+1;}
    }
    return -1;
}
int main()
{
    vector<int>v={1,2,3,4,5,6,7,8,9,14};
    cout<<iterativeBinarySearch(v,10);
    return 0;
}