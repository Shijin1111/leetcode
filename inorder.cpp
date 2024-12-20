#include<iostream>
using namespace std;
class Node
{
    public:
        int val;
        Node *left,*right;
        Node(int x):val(x),left(nullptr),right(nullptr){}
};
class TreeTraversal
{
    public:
        void inorder(Node* root)
        {
            if(root==nullptr)
                return;
            inorder(root->left);
            cout<<root->val<<"\t";
            inorder(root->right);
        }
};
int main()
{
    TreeTraversal T;
    Node* r = new Node(4);
    r->left = new Node(34);
    r->right = new Node(67);
    r->left->left = new Node(57);
    r->right->left = new Node(27);
    r->left->right = new Node(34);
    r->right->right = new Node(81);
    T.inorder(r);
    return 0;
}