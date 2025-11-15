#include<bits/stdc++.h>
using namespace std;
void quicksort(vector <int> &arr,int low,int high)
{
    if(low>=high)
    return;
    else 
    {
    int pvt=high;
    int temp;
    int i=low-1;
    for(int j=low;j<high;j++)
    {
        if(arr[j]<arr[pvt])
        {   
            i++;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        }
        i++;
        swap(arr[i],arr[pvt]);
        quicksort(arr,low,i-1);
        quicksort(arr,i+1,high);
    }


}
int main ()
{   int n;
    cout<<"Enter the no of elements in the array ";
    cin >>n;
     vector <int> arr(n);
    cout<<"Enter the numbers of array you want to search " ;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    for(int j=0;j<n;j++)
    {
        cout<<" "<<arr[j]<<" ";
    }
}