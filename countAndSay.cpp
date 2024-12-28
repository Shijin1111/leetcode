#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <unordered_map>
// #include <string>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    string res = "1";
    int i = 1;
    while (i<n)
    {
        string curr = "";
        for(int j=0;j<res.size();j++)
        {
            int count = 1;
            while(j+1<res.size() && res[j] == res[j+1])
            {
                count++;
                j++;
            }
            curr += to_string(count) + res[j];
        }
        res = curr;
        i++;
    }
    cout<<res;
    return 0;
}