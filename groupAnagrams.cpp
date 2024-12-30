// Given an array of strings strs, group the 
// anagrams
//  together. You can return the answer in any order.

 

// Example 1:

// Input: strs = ["eat","tea","tan","ate","nat","bat"]

// Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

// Explanation:

// There is no string in strs that can be rearranged to form "bat".
// The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.
// The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.
// Example 2:

// Input: strs = [""]

// Output: [[""]]

// Example 3:

// Input: strs = ["a"]

// Output: [["a"]]



#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <unordered_map>
#include <string>
using namespace std;
int main()
{
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    unordered_map<string,vector<string>> strmap;
    for (string str : strs)
    {
        string x = str;
        sort(x.begin(),x.end());
        strmap[x].push_back(str);
    }
    vector<vector<string>> ans;
    for(auto x: strmap)
    {
        ans.push_back(x.second);
    }
    for (vector<string> vec : ans)
    {
        cout<<"[";
        for (string str : vec)
        {
            cout<<" "<<str;
        }
        cout<<" ]";
    }
    return 0;
}
