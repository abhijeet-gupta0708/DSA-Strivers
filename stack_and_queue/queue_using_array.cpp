#include<bits/stdc++.h>
using namespace std;

class que
{
    public:
    int start=-1,end=-1;
    int qu[10];
    int currsize=0;

    void push(int x)
    {
        if(currsize>=9)
        cout<<"SpaceFull";
    
        else if(start==end==-1)
        {
            start=0;
            end=0;
            qu[end]=x;
            currsize++;
        }
        else{
            
            currsize++;
            qu[end]=x;
            end=(end+1)%10;
        }
    }

    void pop()
    {
        if(currsize==0)
        cout<<"Queue already empty";

        if(currsize==1)
        start=end=-1;

        else
        {
        start=(start+1)%10;
        currsize--;
        }
    }
    void peek()
    {
        if(currsize!=0)
        cout<<qu[start];

    }
    void size()
    {
    cout<<(currsize+1)<<endl;
    }
};



int main()
{
    cout<<"Queue is ready ";
    int choice;
    que s;
    cout<<"Press 0 to exit";
    cin>>choice;
    while(choice!=0)
    {
    cout<<"ENter 0 to push \n Enter 1 to pop \n Enter 2 to peek \n Enter 3 to size";
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