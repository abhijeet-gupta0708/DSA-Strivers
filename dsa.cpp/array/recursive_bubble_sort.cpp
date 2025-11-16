#include<bits/stdc++.h>
using namespace std;
void bubblesort(vector<int>&arr,int min, int size)
{   
    if(size<=1)
    return ;
    int high=min;
    for(int i=0;i<high;i++)
    {
   if (arr[i]>arr[high])
   {
    swap(arr[i],arr[high]);
   }
//    high--;
    }
   bubblesort(arr,min+1,size-1);
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
    bubblesort(arr,0,n-1);
     for(int i=0;i<n;i++)
     {
    cout<<arr[i];
     }

}