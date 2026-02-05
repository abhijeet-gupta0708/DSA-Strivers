#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter The size of array";
    cin>>n;

     vector<int> arr(n);//Array 1
    cout<<"ENter the content of array :\n";
    for(int i=0;i<n;i++) 
    cin>>arr[i];

    int xor1=0,xor2=0;
    for(int i=0;i<n;i++)
    {
        xor2=xor2^arr[i];
        xor1=xor1^i;
    }
     xor1=xor1^n;
    cout<<"Missing no is : "<<(xor1^xor2);
    return 0;
}