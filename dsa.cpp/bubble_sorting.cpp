//Bubble sorting in ascending order
#include<bits/stdc++.h>
using namespace std;
void bubblesort(int size,int arr[])
{
    for(int i=size-1;i>=1;i--)
    {
        int min=i;
        for(int j=0;j<=i;j++)
        {
            if(arr[j]>arr[min])
             swap(arr[min],arr[j]);
        }
    }
}
int main()
{
    int n, arr[100];
    cout<<"Enter the number of elements of the array"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubblesort(n,arr);
    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i]<<" ";
    }

}
