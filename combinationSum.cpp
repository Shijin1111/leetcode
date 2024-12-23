class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        // there is two solutions for this;
        // check both;In this we calls backtrack as recursion twice;
        // other method we gives it in for loop and calls btrack in between 
        // push_back and pop_back;
        vector<vector<int>> res;
        int sum = 0;
        vector<int> vec;
        backtrack(res,candidates,vec,target,sum,0);
        return res;
    }
    void backtrack(vector<vector<int>>& res, vector<int>& candidates, vector<int> vec, int target, int sum, int index)
    {
        if(sum == target)
        {
            res.push_back(vec);
            return;
        }
        if (index == candidates.size() || sum > target) {
            return;
        }    
        vec.push_back(candidates[index]);
        sum += candidates[index];
        backtrack(res,candidates,vec,target,sum,index);
        vec.pop_back();
        sum -= candidates[index];
        backtrack(res,candidates,vec,target,sum,index+1);
    }
};