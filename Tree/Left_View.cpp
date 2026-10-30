#include<bits/stdc++.h>
using namespace  std;
// Defining the Tree
class Node
{
    public:
    int data;
    Node * left,*right;

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
    Node * temp;
    if(x==-1)
    return nullptr;
    temp=new Node(x);
    cout<<"Enter the Left Child of "<<temp->data<<":\n";
    temp->left=BinaryTree();
    cout<<"Enter the Right Child of "<<temp->data<<":\n";
    temp->right=BinaryTree();
    return temp;
}

void leftview(Node * root, vector<int>&ans)
{
    if(root==nullptr) return ;

    queue<Node * >qu;
    qu.push(root);

    while(!qu.empty())
    {
        int n=qu.size();

        ans.push_back(qu.front()->data);
        Node * temp;
        while(n--)
        {
            temp=qu.front();
            qu.pop();
            if(temp->left) qu.push(temp->left);
            if(temp->right) qu.push(temp->right);


        }
    }


}

int main()
{
    cout<<"Enter the Root Node ";
    Node * root;
    root=BinaryTree();

    vector<int>ans;
    leftview(root,ans);

    for(int x:ans)
    cout<<x;

}