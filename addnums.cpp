#include <iostream>
#include <vector>
using namespace std;
struct  node
{
    int val;
    node* next;
    node(int x):val(x),next(nullptr){}
    node(int x,node* n):val(x),next(n){}
};

class add_ll
{
    public:
    node* addnums(node* p,node* q)
    {
        if(!p && !q)
            return nullptr;
        node* res = new node(0);
        node* dummy = res;
        int carry = 0;
        while(p || q)
        {
            int sum = carry;
            if(p!=nullptr)
            {
                sum = sum + p->val;
                p = p->next;
            }
            if(q!=nullptr)
            {
                sum = sum + q->val;
                q = q->next;
            }
            int digit = sum % 10;
            carry = sum / 10;
            res->next = new node(digit);
            res = res->next;
            
        }
        return dummy->next;
    }
};
int main()
{
    node* p = new node(7);
    node* q = new node(4);
    p->next = new node(3);
    q->next = new node(6);
    p->next->next = new node(6);
    q->next->next = new node(2);  
    add_ll l;
    node* res = l.addnums(p,q);  
    while (res!=nullptr)
    {
        cout<<res->val;
        res = res->next;
    }
    return 0;
}