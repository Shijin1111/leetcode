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
    vector<string> result = letterCombinations("345");
    for (const string& str : result)
    {
        cout << str << " ";
    }    
    return 0;
}
