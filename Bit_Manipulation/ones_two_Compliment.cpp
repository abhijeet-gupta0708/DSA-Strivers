#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    string decimal=to_string (x);
    string b="";
    
    
    // Finding the Binary Equivalent of the input 
    
    while (x>=1)
    {
        if(x%2==1)
        b+='1';
        else
        b+='0';
        
        x/=2;
        
    }
    string before_comp=b;
    // Reversing the New Binary to form the input's equivalent
    reverse (b.begin(),b.end());
    cout<<b<<endl;
    int size=b.length();
    
    // FInding 1's Complement just subtract each digit by abs 1 
    int comp=0;
    int binary=stoi(before_comp);
    int rem=0;
    while(binary)
    {
       rem=binary%10;
       comp=(comp*10)+(abs(rem-1));
       binary/=10;
        
    }

    cout<<comp<<endl;

    // Two's COmplement
    int two=comp+1;
    cout<<two;
    return 0;
}