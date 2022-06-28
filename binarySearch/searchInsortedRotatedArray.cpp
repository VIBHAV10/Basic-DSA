#include<vector>
#include<iostream>
using namespace std;
int search(vector<int>& nums, int target) {
    int low=0, high=nums.size()-1;
    int mid;
    while(high>=low)
    {
        mid=(high+low)/2;
        if (nums[mid]==target) 
        {
            return mid;
        }
        else if (nums[mid]>nums[low]) //left half is sorted
        {
            if(target>=nums[low] && target<nums[mid]) //check if the element lies in the left half
            {
                high=mid-1; //left half is sorted and element is in left half
            }
            else
            {
                low=mid+1; //left half is sorted and element isn't in left half
            }
                
        }
        else
        {
            if(nums[mid]<target && nums[high]>=target) 
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
    }
    return -1;
    }
int main()
{
    vector<int>v={3,1};
    cout<<search(v,1);
    return 0;
}