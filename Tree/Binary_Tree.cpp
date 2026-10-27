#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node * left,* right;

    Node(int value)
    {
        data=value;
        left=right=nullptr;
    }
};


 Node * binarytree()
{
    int x,first,second;
    cin>>x;
    if(x==-1) return nullptr;
    Node *temp=new Node (x);
    cout<<"Enter the left child of "<<temp->data<<endl;
    temp->left=binarytree();
    cout<<"Enter the right child of "<<temp->data<<endl;
    temp->right=binarytree();
}
int main()
{
    cout<<"Enter the Root Node "<<endl; 

    Node *root;
    root=binarytree();
    
}
