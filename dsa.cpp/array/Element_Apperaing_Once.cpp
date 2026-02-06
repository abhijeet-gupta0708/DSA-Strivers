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


    // Declaring An Hash map
    map<int,int>mp;
    for(int i=0;i<n;i++) 
    {
        mp[arr[i]]+=1;
    }
    for(auto ele :mp)
    {
        if(ele.second==1)
        cout << ele.first;
    } 

    return 0;
}