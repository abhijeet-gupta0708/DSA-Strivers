#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,j=0;
    cout<<"Enter the size of array " ;
    cin>>n;
    vector<int> arr(n);//Array 1
    cout<<"ENter the content of array :\n";
    for(int i=0;i<n;i++) 
    cin>>arr[i];
    cout<<"Enter The no of shift you wants to make ";
    cin>>k;
    int m=n-k;
    vector <int> arr2(m);//Array 2
    // Coyping The elements 
    for(int i=0;i<(n-k);i++)
    {
        arr2[i]=arr[i];
    }
    
    // Shifting the remaining elements 

    for(int i=0;i<k;i++)
    {
        arr[i]=arr[m];
        m++;
    }
    // Shifting the First k elements to right 

    
    for(int i=(k);i<n;i++)
    {
        arr[i]=arr2[j];
        j++;
    }

    // Printing the Rotated Array

    cout<<"Rotated array is :\t" ;
    for(int i=0;i<n;i++) 
    cout<<arr[i]<<" ";


}