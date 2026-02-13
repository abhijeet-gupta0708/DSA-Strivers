#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Taking Array From User
    int n;
     cout<<"Enter the no of elements of array \n";
    cin>>n;
    vector <int>arr(n);  
   
    cout<<"Enter the elements of the array \n";
    for (int i=0;i<n;i++)
    cin>> arr[i];

    // Sorting
    int low=0,mid=0;
    int high=n-1;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {   swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    // Printing Sorted Array
    for (int i=0;i<n;i++)
    cout<< arr[i];
    return 0;
}