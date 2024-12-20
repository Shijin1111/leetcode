#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

struct node
{
    int val;
    node *next;
    node(int x):val(x),next(nullptr){}
    node(int x,node *ptr):val(x),next(ptr){}
};


int main()
{
    node* l1 = new node(5);
    l1->next = new node(16);
    l1->next->next = new node(19);
    l1->next->next->next = new node(26);
    l1->next->next->next->next = new node(37);
    l1->next->next->next->next->next = new node(53);    
    l1->next->next->next->next->next->next = new node(54);
    l1->next->next->next->next->next->next->next = new node(66);
    l1->next->next->next->next->next->next->next->next = new node(81);
    node* l2 = new node(4);
    l2->next = new node(14);
    l2->next->next = new node(17);
    l2->next->next->next = new node(19);
    l2->next->next->next->next = new node(27);
    l2->next->next->next->next->next = new node(43);    
    l2->next->next->next->next->next->next = new node(45);
    l2->next->next->next->next->next->next->next = new node(56);
    l2->next->next->next->next->next->next->next->next = new node(61);
    node* current = new node(0);
    node* dummy = current;
    while(l1!=nullptr && l2!=nullptr)
    {
        if(l1->val<=l2->val)
        {
            current->next = l1;
            l1 = l1->next;
        }
        else{
            current->next = l2;
            l2 = l2->next;
        }
        current = current->next;
    }
    if (l1!=nullptr)
    {
        current->next = l1;
    }
    if (l2!=nullptr)
    {
        current->next = l2;
    }
    while (dummy!=nullptr)
    {
        /* code */
        cout<<dummy->val<<" ";
        dummy = dummy->next;
    }
    return 0;
}