//Fibbonacchi
#include<bits/stdc++.h>
using namespace std;
int fibb(int n)
{
    if(n<=1)
    return n;
    else 
    return fibb(n-1)+fibb(n-2);
}
int main()
{   int num;
   cout<<" Emter a number "<<endl;
   cin>>num;
   int fibbo =fibb(num);
   cout<< fibbo; 
}

