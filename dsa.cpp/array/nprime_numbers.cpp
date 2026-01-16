#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter n";
    int n,temp=0;
    
    cin>>n;
    for(int j=2;j<n;j++)
    {
        int flag=0;
        for(int i=2;i<j-1;i++)
            {
                if(j%i==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            temp++;
 
}
   cout<<temp;
}
