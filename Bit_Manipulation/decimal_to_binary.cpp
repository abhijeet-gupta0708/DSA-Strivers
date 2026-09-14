#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    string b="";
    while(x>=1)
    {
        if(x%2==1)
        b+='1';
        else
        b+='0';

        x/=2;

    }
    reverse(b.begin(),b.end());
    cout<<b;





    return 0;
}