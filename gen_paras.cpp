#include <iostream>
#include <vector>
using namespace std;


void backtrack(vector<string>& res,int n,int open,int close,string s)
{
    if(open == n && close == n)
        {
            res.push_back(s);
            return;
        }
        if(open!=n)
            backtrack(res,n,open+1,close,s+"(");
        if(close<open)
            backtrack(res,n,open,close+1,s+")");
}
void gen_paras(int n)
{
    vector<string> res;
    string s;
    int open = 0, close = 0;
    backtrack(res,n,open,close,s);
    for(string s:res)
    {
        cout<<s<<" ";
    }
}
int main()
{
    gen_paras(3);
    return 0;
}