#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

void backtrack(int open,int close,int n,vector<string> &res,string comb)
{
    if(open == n && close==n)
    {
        res.push_back(comb);
        return;
    }
    if(open!=n)
    {
        backtrack(open+1,close,n,res,comb+'(');
    }
    if(close<open)
    {
        backtrack(open,close+1,n,res,comb+')');
    }
}

int main()
{
    int n,open=0,close=0;
    cout<<"enter number of parenthesis";
    cin>>n;
    string comb;
    vector<string> res;
    backtrack(open,close,n,res,comb);
    for(string s:res)
    {
        cout<<s<<"\n";
    }
    return 0;
}