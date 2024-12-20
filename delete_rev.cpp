#include <iostream>
#include <vector>
using namespace std;
struct node
{
    int val;
    node* next;
    node(int x):val(x),next(nullptr){}
};

int main()
{
    node* head = new node(5);
    head->next = new node(2);
    head->next->next = new node(7);
    head->next->next->next = new node(3);
    head->next->next->next->next = new node(8);
    node* temp = head;
    int cnt = 0;
    while(temp!=nullptr)
    {
        cnt++;
        temp = temp->next;
    }
    cout<<"enter the position from backwards which you want to delete";
    int n;
    cin>>n;
    int m = cnt - n;
    node* curr = head;
    for(int i=0;i<m-1;i++)
    {
        curr = curr->next;
    }
    curr->next = curr->next->next;
    while (head!=nullptr)
    {
        cout<<head->val<<" ";
        head = head->next;
    }
    
    return 0;
}