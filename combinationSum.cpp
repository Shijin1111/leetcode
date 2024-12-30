#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
void backtrack(vector<vector<int>>& res,vector<int>& candidates,vector<int>& comb,int target, int sum, int index)
{
    if(sum == target)
    {
        res.push_back(comb);
        return;
    }
    if(index == candidates.size() || sum > target) 
    {
        return;
    }  
    comb.push_back(candidates[index]);
    sum += candidates[index];
    backtrack(res,candidates,comb,target,sum,index);
    comb.pop_back();
    sum -= candidates[index];
    backtrack(res,candidates,comb,target,sum,index+1);
}
int main()
{
    vector<int> candidates = {3,7,6,2};
    int target = 7;
    vector<vector<int>> res;
    int sum = 0;
    vector<int> comb;
    backtrack(res,candidates,comb,target,sum,0);
    for (vector<int> vec : res)
    {
        cout<<"[";
        for (int i : vec)
        {
            cout<<i<<" ";
        }
        cout<<"]";
    }
    
    return 0;
}