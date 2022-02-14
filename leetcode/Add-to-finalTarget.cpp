/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/

#include<iostream>
#include<vector>
using namespace std;


class Solution {

public:
vector<int> twoSum(vector<int>& nums, int target)
{
    vector<int>arrayIndex;

    int S = nums.size();

    for(int i = 0 ; i<S; i++)
    {
        if(nums[i] + nums[i+1] == target)
        {
            arrayIndex.push_back(i);
            arrayIndex.push_back(i+1);

        }
    }
    return arrayIndex;
}

};

int main()
{

    Solution sol;
    vector<int>array{3,2,4};
    int target = 6;
    auto values = sol.twoSum(array, target);
    for(auto val : values)
    {
        cout<<val<<endl;
    }


    return 0;
}