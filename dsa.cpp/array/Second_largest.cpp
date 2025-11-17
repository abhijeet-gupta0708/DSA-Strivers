#include<bits/stdc++.h>
using namespace std;
void Seclargest(vector <int>&arr,int n)
{
    int largest ,sseclargest=-1;
    largest=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            sseclargest=largest;
            largest=arr[i];
        }
        if(arr[i]<largest && arr[i]>sseclargest)
        {
            sseclargest=arr[i];
        }
    }
    cout<<"Second largest element is "<<sseclargest;
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
    Seclargest(arr,n);
}