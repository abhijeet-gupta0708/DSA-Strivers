#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *left,*right;
    

    Node(int val)
    {
        data=val;
        left=right=nullptr;
    }
};
Node * BinaryTree()
{
    int x;
    cin>>x;
    Node * temp=new Node(x);
    cout<<"Enter the Left child of "<<temp->data<<" :\n";
    temp->left=BinaryTree();
    cout<<"Enter the Right child of "<<temp->data<<" :\n";
    temp->right=BinaryTree();

    return temp;
}
int sizeoftree(Node * temp)
{
   
    if(temp==nullptr) return 0;
    
    return 1+sizeoftree(temp->left)+sizeoftree(temp->right);
}
int main()
{
    Node * root;
    cout<<"Enter the root note of tree : \n";
    root=BinaryTree();
    int s=sizeoftree(root);
    cout<<s;
}