#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<int> v(5);
    v = {2,6,4,5,21};
    cout<<*v.end(); 
    return 0;
}