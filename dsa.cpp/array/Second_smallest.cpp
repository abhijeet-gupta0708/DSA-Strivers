#include<bits/stdc++.h>
using namespace std;
void Secsmallest(vector <int>&arr,int n)
{
    int smallest,ssecsmall=INT_MAX;
    smallest=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<smallest)
        {
            ssecsmall=smallest;
            smallest=arr[i];
        }
        if(arr[i]>smallest && arr[i]<ssecsmall)
        {
            ssecsmall=arr[i];
        }
    }
    cout<<"Second largest element is "<<ssecsmall;
}
int main()
{   
    int n;
    vector <int>arr(n);  
    cout<<"Enter the no of elements of array \n";
    cin>>n;
    cout<<"Enter the elements of the array \n";
    for (int i=0;i<n;i++)
    cin>> arr[i];
    Secsmallest(arr,n);
}