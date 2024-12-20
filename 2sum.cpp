#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
    string s = "aabbfdfwdsgirffds";
    if(s.size()<=1) return s.size();
    cout<<" hello";
    int left = 0, right = 1;
    int l = 0,mx = 0;
    unordered_set<char> myset;
    while(right<s.size())
    {
        if(myset.find(s[right]) != myset.end())
        {
            myset.erase(s[left]);
            left++;
        }
        l = right - left;
        mx = max(mx,l);
        right++;
    }
    cout<<mx;
    return mx;
}