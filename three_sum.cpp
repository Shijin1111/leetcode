#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void three_sum(vector<int> qst)
{
    vector<vector<int>> res;
    sort(qst.begin(),qst.end());
    for (int i = 0; i < qst.size(); i++)
    {
        if(i>0 && qst[i] == qst[i-1])
            continue;
        int j = i+1;
        int k = qst.size();
        while (j<k)
        {
            int total = qst[i]+qst[j]+qst[k];
            if (total>0)
            {
                k--;
            }
            else if(total<0)
            {
                j++;
            }
            else
            {
                res.push_back({qst[i],qst[j],qst[k]});
                j++;
                while(qst[j] == qst[j-1] && j<k)
                    j++;
            }    
        }
    }
    for(auto vec:res)
    {
        cout<<"[";
        for(auto x:vec)
        {
            cout<<x<<",";
        }
        cout<<"]";
    }
}
int main()
{
    vector<int> qst = {-1,0,1,2,-1,-4};
    three_sum(qst);
    return 0;
}
