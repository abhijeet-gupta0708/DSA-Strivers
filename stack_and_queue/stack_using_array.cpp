#include <bits/stdc++.h>
using namespace std;

class sta
{   public:
    int top=-1;
    int st[10];


    void push(int x)
    {
        if (top>=10) cout<<"Max Size reached";
        top+=1;
        st[top]=x;
    }
    
    void pop()
    {
        top--;
    }
    void peek()
    {
        cout<<st[top]<<endl;
    }
    void size()
    {
        cout<<(top+1)<<endl;
    }

};

int main()
{
    cout<<"Stack is ready ";
    int choice;
    sta s;
    cout<<"Press 0 to exit";
    cin>>choice;
    while(choice!=0)
    {
    cout<<"ENter 0 to push \n Enter 1 to pop \n Enter 2 to size \n Enter 3 to size";
    int x;
    cin>>x;
    switch (x)
    {
    case 0:
        cout<<"ENter The number :";
        int y;
        cin>>y;
        s.push(y);
        break;
    case 1:
       s.pop();
        break;
        
        case 2:
        s.peek();
        break;
        
        case 3:
        s.size();
        break;
    
    default:
        break;
    }
}


}