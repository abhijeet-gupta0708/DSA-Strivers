#include<bits/stdc++.h>
using namespace std;
int element(int row,int col)
{   
    int rem=1;
    for(int i=0;i<col;i++)
    {
        rem=rem*(row-i);
        rem=rem/(i+1);
    }
    return rem;
}
void FUllRowOptimal(int row)
{   int ans=1;
    int next_ele=0;
    cout<<ans<<" ";
    int ele=row-1;
    for(int i=1;i<row;i++)
    {
        
        ans=ans*(row-i);
        ans=ans/i;
        cout<<ans<<" ";
    }
}
int main()
{
    int choice,newchoice;
    int row ,col;
    cout<<"Enter 1 : To get the element of a perticular row and coloumn \nEnter 2 : To Print a full Row \nEnter 3 : To print Full Pascles Triangle : "<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
    {
        cout<<"Enter the Row and Coloumn number : ";
        
        cin>>row>>col;
        int ele=element(row-1,col-1);
        cout<<ele;
        break;
    }

    case 2 :
    {
        cout<<"Enter the Row no to get the element ";
        cin>>row;
        cout<<"Press 1 For Brute Force Method \nPress 2 for Optimal Method ";
        cin>>newchoice;
        if(newchoice==1)
        {
        for(int c=1;c<=row;c++)
        cout<<(element(row-1,c-1))<<" ";
        }
        else if(newchoice==2)
        {
            FUllRowOptimal(row);
        }
        else 
         cout<<"Wrong Choice";
        break;
    }

    case 3 :
    {
        cout<<"Enter the Value of N : ";
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
    {
        FUllRowOptimal(i);
        cout<<"\n";
    }
    break;

    }
    
    default:
        cout<<"Wrong Option Selected";
        break;
    }
    return 0;
}