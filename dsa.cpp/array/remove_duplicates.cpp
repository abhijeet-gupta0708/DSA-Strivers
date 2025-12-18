// Remove all the duplicated elements from a sorted array 

#include <bits/stdc++.h>
using namespace std;

void remove_duplicates(vector<int>&arr,int nums)
{
    int i=0;
    for(int j=1;j<nums;j++)
    {
        if(arr[j] != arr [i])
        {
            arr[i+1]=arr[j];
            i++;
        }
    }
    // Printing the index with the array
    cout<<"\nNew size of the array after removing the Duplicates is :" << (i+1) <<endl;
    cout<<"The Array after removing duplicates are : \n";
    for(int j=0;j<=i;j++)
    {
        cout<< arr[j];
    }
}
int main ()
{
    int n;
    cout <<"Enter the size of array :\n";
    cin >> n;
    vector<int> arr(n);
    cout<<"Enter the elements of array :\n";
    for(int j=0;j<n;j++)
    {
        cin >> arr[j];
    }
    cout<<" The elements of array :\n";
    for(int j=0;j<n;j++)
    {
        cout<< arr[j];
    }
    remove_duplicates(arr,n);

}
