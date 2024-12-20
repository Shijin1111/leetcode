#include <vector>
#include <iostream>
using namespace std;
string check_pal(string s)
{
    if(s.size() == 0) return "";
    vector<vector<bool>> dp(s.size(),vector<bool>(s.size(),false));
    int start = 0 , mx = 1;
    for (int i = 0; i < s.size(); i++)
    {
        dp[i][i] = true;

    }
    for (int i = 0; i < s.size()-1; i++)
    {
        if(s[i] == s[i+1])
        {
            dp[i][i+1] = true;
            start = i;
            mx = 2;
        }
    }
    for(int l = 3;l < s.size();l++)
    {
        for (int i = 0; i < s.size()-l; i++)
        {
            int j = i + l - 1;
            if(s[i] == s[j] && dp[i+1][j-1])
            {
                start = i;
                mx = l;
            }
        }
    }
    return s.substr(start,mx);
    
    


}
int main()
{
    cout<<"enter the word ";
    string s;        
    cin>>s;
    
    cout<<check_pal(s);
    return 0;
}