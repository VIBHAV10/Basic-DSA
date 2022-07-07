#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    int i = 0;
    int j = nums.size() - 1;
    int k = nums.size() - 2;
    while (i < j) {
        if (nums[i] + nums[j] + nums[k] == 0) {
            vector<int> temp;
            temp.push_back(nums[i]);
            temp.push_back(nums[j]);
            temp.push_back(nums[k]);
            result.push_back(temp);
            i++;
            j--;
            k--;
        } else if (nums[i] + nums[j] + nums[k] < 0) {
            i++;
        } else {
            j--;
            k--;
        }
    }
    return result;
}
vector<vector<int>> threeSum2(vector<int>& nums) {
        vector<vector<int>>solution;
        sort(nums.begin(),nums.end());
        vector<int> lol;
        for (int i=0;i<nums.size();i++)
        {
            int x=nums[i];
            int left=i,right=nums.size()-1;
            while(left<right)
            {
                if(nums[left]+nums[right]==-x)
                {
                    lol.push_back(x);
                    lol.push_back(nums[left]);
                    lol.push_back(nums[right]);
                    solution.push_back(lol);
                    lol.clear();
                }
            }
        }
        return solution;
    }

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = threeSum(nums);
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    // result = threeSum2(nums);
    // for (int i = 0; i < result.size(); i++) {
    //     for (int j = 0; j < result[i].size(); j++) {
    //         cout << result[i][j] << " ";
    //     }
    //     cout << endl;
    //}
    return 0;
}