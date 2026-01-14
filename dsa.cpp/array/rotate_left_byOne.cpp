#include<bits/stdc++.h>
using namespace std;
int main()
{   
    // Getting the array
    
    int arr[5];
    cout<<"ENter the content of array :\n";
    for(int i=0;i<5;i++) 
    cin>>arr[i];
    int temp=arr[0];


    //Rotating the array left by 1

    for(int j=1;j<5;j++)
    {
        arr[j-1]=arr[j];
    }
    arr[4]=temp;

// Printing the Rotated Array

    cout<<"Rotated array is :\t" ;
    for(int i=0;i<5;i++) 
    cout<<arr[i]<<" ";


}
