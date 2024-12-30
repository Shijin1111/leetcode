#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <vector>
using namespace std;


void backtrack(string s,int index,string comb,unordered_map<char,string> map1,vector<string> &res)
{
    if(index == s.size())
    {
        res.push_back(comb);
    }
    for(char ch : map1[s[index]])
    {
        backtrack(s,index+1,comb+ch,map1,res);
    }
}

vector<string> letterCombinations(string s)
{
    vector<string> res;
    if(s.empty())
        return {};
    unordered_map<char,string> map1 = {
                {'2', "abc"},
                {'3', "def"},
                {'4', "ghi"},
                {'5', "jkl"},
                {'6', "mno"},
                {'7', "pqrs"},
                {'8', "tuv"},
                {'9', "wxyz"}
    };
    backtrack(s,0,"",map1,res);
    return res;
}

int main()
{
    // vector<string> result = letterCombinations("345");
    // for (const string& str : result)
    // {
    //     cout << str << " ";
    // }   
    vector<int> nums = {3,1,5,6,89,5,82,65};
    int n = nums.size();

    // Step 1: In-place rearrangement, move each number to its correct position if possible.
    for (int i = 0; i < n; i++) {
        // Check if nums[i] is in the valid range [1, n] and not in its correct position
        while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) {
            // Swap nums[i] with the number at its "correct" position nums[nums[i] - 1]
            // int correctPosition = nums[i] + 1;
            swap(nums[i], nums[nums[i] - 1]);
        }
    }
    for (auto &&i : nums)
    {
        cout<<i<<" ";
    }
    
    return 0;
}
