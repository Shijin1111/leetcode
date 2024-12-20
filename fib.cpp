#include <iostream> 
#include <vector>
using namespace std;
int fibonacci(int n,vector<int>& mem)
{
    if(n<=1)
        return mem[n]=n;
    if(mem[n] != 0)
        return mem[n];
    mem[n] = fibonacci(n-1,mem) + fibonacci(n-2,mem);
    return mem[n];
}
int main()
{
    cout<<"enter a number";
    int n;
    cin>>n;
    vector<int> mem(n+1,0); 
    fibonacci(n,mem);
    for(int i = 0; i < n; i++)
        cout << mem[i] << " ";
    return 0;
}