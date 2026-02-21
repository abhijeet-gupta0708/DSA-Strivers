#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number";
    cin >>n;
    string s="";
    for(int i=1;i<=n;i++)
    {
        if(i%15==0)
        {
            s=s+"FizzBuzz,";
        }
        else if(i%3==0)
        {
            s=s+"Fizz,";
        }
        else if(i%5==0)
        {
            s=s+"Buzz,";
        }
        else
        s=s+to_string(i)+",";
    }
    cout<<s;



}

