#include <iostream>
#include <vector>
using namespace std;
void backtrack(vector<vector<int>>& res,vector<int>& v,int index)
{
    if(index == v.size())
    {
        res.push_back(v);
        return;
    }
    for (int i = index; i < v.size(); i++)
    {
        swap(v[i],v[index]);
        backtrack(res,v,index+1);
        swap(v[i],v[index]);
    }
}
void permute(vector<int>& v)
{
    vector<vector<int>> res;
    int index = 0;
    backtrack(res,v,index);
    for(vector<int> vec : res)
    {
        for(int x: vec)
        {
            cout<<x<<" ";
        }
        cout<<"\n";
    }
}

int main()
{
    vector<int> v = {1,2,3,4,5,6,7,8};
    permute(v);
    return 0;
}