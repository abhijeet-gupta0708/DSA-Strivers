#include<bits/stdc++.h>
using namespace std;
void bubblesort(vector<int>&arr,int size)
{   
    if(size==1)
    return;
    // int high=min;
    for(int i=0;i<size-1;i++)
    {
   if (arr[i]>arr[i+1])
   {
    swap(arr[i],arr[i+1]);
   }
//    high--;
    }
   bubblesort(arr,size-1);
}
int main()
{   int n;
    cout<<"ENter no of elements of array";
    cin>> n;
    vector<int> arr(n);
    cout<<"ENter Elements of array \n";
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    bubblesort(arr,n);
     for(int i=0;i<n;i++)
     {
    cout<<" "<<arr[i]<<" ";
     }

}