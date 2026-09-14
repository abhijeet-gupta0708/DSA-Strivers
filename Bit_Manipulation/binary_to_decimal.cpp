#include<bits/stdc++.h>
using namespace std;


int main()
{
    int x;
    cin>>x;
    string binary=to_string(x);
    // reverse(binary.begin(),binary.end());
    int size=binary.length();
    int i=0;

    string decimail="";
    int decimal=0;
    while(size--)
    {
        decimal+=(binary[i]-'0')*(pow(2,i++));

    }
    cout<<decimal;

}