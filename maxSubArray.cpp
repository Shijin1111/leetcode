// Given an integer array nums, find the 
// subarray
//  with the largest sum, and return its sum.

 

// Example 1:

// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: The subarray [4,-1,2,1] has the largest sum 6.
// Example 2:

// Input: nums = [1]
// Output: 1
// Explanation: The subarray [1] has the largest sum 1.
// Example 3:

// Input: nums = [5,4,-1,7,8]
// Output: 23
// Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.


#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <unordered_map>
#include <string>
using namespace std;
int main()
{
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,6};
    if (nums.size()==0) 
        cout<< 0;
    vector<vector<int>> dp(nums.size(),vector<int>(nums.size(),0));
    for(int i=0;i<nums.size();i++)
    {
        dp[i][i] = nums[i];
    }
    for(int i=0;i<nums.size();i++)
    {
        for(int j=i+1;j<nums.size();j++)
        {
            dp[i][j] = dp[i][j-1] + nums[j];
        }
    }
    int maxsum = nums[0];
    for (auto i : dp)
    {
        for (auto j : i)
        {
            maxsum = max(maxsum,j);
        }
    }
    cout<<maxsum;
    return 0;
}
