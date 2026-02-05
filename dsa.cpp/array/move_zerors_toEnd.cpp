#include<bits/stdc++.h>
using namespace std;
void zeros(vector<int>& nums,int n)
{
    vector<int> temp(n);
    int j=0,k=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]==0)
        {
            temp[j]=nums[i];
            j++;
            nums[i]=nums[i+1];
        }
    }
    if(nums[n]!=0)
    nums[j-1]=nums[n];
    for(j;j<n;j++){
    nums[j]=temp[k];
    k++;}
}
int main()
{
     int n,d;
    cout<<"Enter The size of array";
    cin>>n;

     vector<int> arr(n);//Array 1
    cout<<"ENter the content of array :\n";
    for(int i=0;i<n;i++) 
    cin>>arr[i];

    zeros(arr,n);
    // Printing the Rotated Array

    cout<<"Rotated array is :\t" ;
    for(int i=0;i<n;i++) 
    cout<<arr[i]<<" ";
}