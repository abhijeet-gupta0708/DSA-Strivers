#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {   
       
        bool cond2=false;
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==67)
            cond2=true;
        }
        if(cond2)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
    return 0;
}