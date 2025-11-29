#include<bits/stdc++.h>
using namespace std;
bool check_sorted(vector <int>&arr,int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]>=arr[i-1])
        {}
        else
        return false;
    }
    return true;
}
int main()
{
    int n;
    cout<<"Enter the Size of Array";
    cin>>n;
    vector <int> arr(n);
    cout<<"Enter the elements of the array \n";
    for(int  i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool sorted=check_sorted(arr,n);
    if (sorted)
    cout<<"Array is Sorted";
    else
    cout<<"Array is not sorted";

}