/*

// Array reverse using recursion
#include <bits/stdc++.h>
using namespace std;
void reverse(int size, int arr[] ,int i)
{
    if(i>=size) return;
    else
    {   swap(arr[i],arr[size]);
        reverse(size-1,arr,i+1);
    }
}
int main()
{
    int n , arr[1000];
    cout<<"Enter the size of array "<<endl;
    cin >> n;
    cout<< "Enter the Elements of Array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    reverse(n-1,arr,0);
    for(int i=0;i<n;i++)
    {
        cout<<" "<< arr[i]<< " ";
    }

}

*/

// Panildrome String

#include<bits/stdc++.h>
#include<string.h>
using namespace std;
bool reverse(int ini,int last, string line)
{ 
    if(ini>=last) return true;
    else
    {   if(line[ini]!=line[last])
        { return false;}
        reverse(ini+1,last-1,line);
    }
}
int main()
{   string len;
    cout<<"Enter the line"<<endl;
    getline(cin,len);
    int n =len.size();
    
    if(reverse(0,n-1,len))
    cout<<"Panil";
    else
    cout<<"Not Panil";
    

}





