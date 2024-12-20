#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

bool is_valid(string str)
{
    stack<char> s;
    for (char ch:str)
    {
        if(s.empty())
            s.push(ch);
        else{
            if(s.top()=='{' && ch=='}')
                s.pop();
            else if(s.top()=='[' && ch==']')
                s.pop();
            else if(s.top()=='(' && ch==')')
                s.pop();
            else
                s.push(ch);
        }
    }
    if (s.empty())
        return true;
    else
        return false;
}
int main()
{
    bool b = is_valid("{a[b(c)]}");
    if (b==true)
        cout<<"true";
    else
        cout<<"false";
    return 0;
}