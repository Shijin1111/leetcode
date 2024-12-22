#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

int main()
{
    int arr[] = {4,6,7,6,8,9};
    int j = 0;
    for (int i = 0; i < 6; i++)
    {
        if(arr[i]!=6)
        {
            arr[j] = arr[i];
            j++;
        }
    }
    for(j;j<6;j++)
    {
        arr[j] = 0;
    }
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}