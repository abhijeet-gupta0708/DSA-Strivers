#include<bits/stdc++.h>
using namespace std;
class Node
{
    public :
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
    int x,first,second;
    cin>>x;
    if(x==-1)return nullptr;

    Node * temp=new Node (x);
    cout<<"Enter the Left child of "<<temp->data<<":\n";
    temp->left=BinaryTree();
    cout<<"Enter the right child of "<<temp->data<<":\n";
    temp->right=BinaryTree();

    return temp;
}
vector<int> levelorder(Node * root)
{
    vector<int>ans;
    if(root==nullptr) return ans;

    queue<Node *>qu;
    qu.push(root);
    Node * temp;
    while(!qu.empty())
    {
        temp=qu.front();
        qu.pop();
        ans.push_back(temp->data);
        if(temp->left)
        qu.push(temp->left);
        if(temp->right)
        qu.push(temp->right);

    }
    return ans;

}
int main()
{
    cout<<"Enter the Root Value of Tree :\n";
    Node *root;
    root=BinaryTree();
    vector<int>ans;
    ans=levelorder(root);

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }
}