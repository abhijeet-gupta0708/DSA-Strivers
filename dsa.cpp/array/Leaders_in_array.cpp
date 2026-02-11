#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,k=0;
    cout<<"Enter The size of array";
    cin>>n;

     vector<int> arr(n);//Array 1
     vector<int> temp(n);//Array 1

    cout<<"ENter the content of array :\n";
    for(int i=0;i<n;i++) 
    cin>>arr[i];

    // Making Program
    for(int i=0;i<n;i++)
    {   int count=0;
        for(int j=i;j<n;j++)
        {
            if (arr[i]<arr[j])
            {
                count++;
            break;
            }
            else
            count=0;
        }
        if(count==0)
        {
        temp[k]=arr[i];
        k++;
        }
    }


     // Printing the Leaders of Array

    cout<<"Leaders array is :\t" ;
    for(int i=0;i<n;i++) 
    cout<<temp[i]<<" ";
}