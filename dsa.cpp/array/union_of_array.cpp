#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;

    // Taking 1'st array


    cout<<"Enter the size of 1'st array ";
    cin>>n;
    int arr1[n];
    cout<<"Enter the contents of 1st array";
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }

    // Taking 2nd array

    cout<<"Enter the size of 2'nd array ";
    cin>>m;
    int arr2[m];
    cout<<"Enter the contents of 1st array";
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }


    // Making Union Of array
    
    int max=(n>m)?n:m;
    int arr3[max];
    int k=0;
    while (k<max)
    {   int i=0,j=0;
            while(i<n&&j<m)
            {
            if(arr1[i]!=arr2[j])
            {
                if(arr1[i]<arr2[j])
            {
                arr3[k]=arr1[i];
            }
            else
            arr3[k]=arr2[j];

            i++;
            j++;
            
               
            }
            
            else 
            {
                 arr3[k]=arr1[i];
                i++;
                j++;
            }


        k++;
    }
}

// Printing the Rotated Array

    cout<<"Rotated array is :\t" ;
    for(int i=0;i<max;i++) 
    cout<<arr3[i]<<" ";
}