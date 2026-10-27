#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *left,*right;
    Node (int val)
    {
        data=val;
        left=right=nullptr;
    }
};
Node * BinaryTree()
{
    int x,first,second;
    cin>>x;
    if(x==-1) return nullptr;
    Node * temp=new Node(x);
    cout<<"Enter the Left Child of "<<temp->data<<" :";
    
    temp->left=BinaryTree();
    cout<<"Enter the right Child of "<<temp->data<<" :";
    
    temp->right=BinaryTree();

    return temp;
}
void postorder(Node * temp)
{
    if(temp==nullptr) return;

    postorder(temp->left);
    postorder(temp->right);
    cout<<temp->data<<"\n";
}
int main()
{
    Node * root;
    cout<<"Enter the ROot element :\n";
    root= BinaryTree();
    postorder(root);
}