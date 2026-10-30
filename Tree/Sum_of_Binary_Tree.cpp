#include<bits/stdc++.h>
using namespace std;
// crating the class nOde

class Node
{
    public:
    int data;
    Node *left,*right;
    Node(int val)
    {
        data=val;
        left=right=NULL;
    }

};
// Creating the Binary Tree
Node * BinaryTree()
{
    int x;
    cin>>x;
    if(x==-1) return nullptr;
    Node * temp=new Node(x);
    cout<<"Enter the Left child of "<<temp->data<<":\n";
    temp->left=BinaryTree();
    cout<<"Enter the right child of "<<temp->data<<":\n";
    temp->right=BinaryTree();

    return temp;
}

// Now Finding the SUm of the tree

int sum(Node *  temp,int & ans)
{
    if(temp==nullptr) return ans;

    ans+=temp->data;
    sum(temp->left,ans);
    sum(temp->right,ans);

    return ans;
}

int main()
{
    cout<<"Enter the Root Node of Tree : \n";
    Node * root;
    root=BinaryTree();
    int ans=0;
    cout<<"The Sum of the tree is : ";
    cout<<sum(root,ans);
}

