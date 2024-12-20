#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

struct node
{
    int val;
    node* next;
    node(int x):val(x),next(nullptr){}
    node(int x,node* ptr):val(x),next(ptr){}
};


int main()
{
    node* l = new node(5);
    l->next = new node(6);
    l->next->next = new node(12);
    l->next->next->next = new node(56);
    l->next->next->next->next = new node(97);
    l->next->next->next->next->next = new node(113);    
    l->next->next->next->next->next->next = new node(34);
    l->next->next->next->next->next->next->next = new node(76);
    l->next->next->next->next->next->next->next->next = new node(41);
    cout<<"enter the position to delete from back ";
    int pos;
    cin>>pos;
    node* first = l;
    node* second = l;
    for (int i = 0; i < pos; i++)
    {
        first = first->next;
    }
    while (first->next!=nullptr)
    {
        first = first->next;
        second = second->next;
    }
    second->next = second->next->next;
    while (l!=nullptr)
    {
        cout<<l->val<<" ";
        l = l->next;
    }
    
    
    return 0;
    
    
}