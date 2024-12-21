#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

struct node
{
    int val;
    node* next;
    node(int x):val(x),next(nullptr){};
    node(int x,node*ptr):val(x),next(ptr){};
};

node* swapfn(node* n) {
        node* ptr = n->next;
        n->next = n->next->next;
        ptr->next = n;
        return ptr;
    }

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
    node* head = l1;
    if(head == nullptr || head->next == nullptr)
    {
        cout<<" ";
    }
    node* newhead = swapfn(head);
    node* current = head;
    while(current->next != nullptr && current->next->next != nullptr)
    {
        current->next = swapfn(current->next);
        current = current->next->next;
    }
    while (newhead!=nullptr)
    {
        cout<<newhead->val<<" ";
        newhead = newhead->next;
    }
    
    return 0;
}