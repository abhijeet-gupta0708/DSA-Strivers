#include<bits/stdc++.h>
using namespace std;
int main()
{   int n,d;
    cout<<"Enter The size of array";
    cin>>n;

     int arr[n];//Array 1
    cout<<"ENter the content of array :\n";
    for(int i=0;i<n;i++) 
    cin>>arr[i];
    cout<<"Enter The no of shift you wants to make ";
    cin>>d;

    int arr2[d];//Array 2


    //Coping the 1- D elements for storing 
    for(int j=0;j<d;j++)
    {
        arr2[j]=arr[j];
    }

    // Rotating The Array To K Place
    int l=0;
    for(int j=d;j<n;j++)
    {
        arr[l]=arr[j];
        l++;
    }

    //Shifting 1-d elements to left

    int k=n-d;
    for(int j=0;j<d;j++)
    {
        arr[k]=arr2[j];
        k++;
    }

    // Printing the Rotated Array

    cout<<"Rotated array is :\t" ;
    for(int i=0;i<n;i++) 
    cout<<arr[i]<<" ";

    

}
