#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int arr[7];
        int sum=0;
        int c=0;
        int temp=-27000;
        for(int i=0;i<7;i++)
        {
            cin>>arr[i];
            temp=max(temp,arr[i]);
        }
        for(int i=0;i<7;i++)
        {   
            if(arr[i]==temp)
            continue;
            arr[i]=-(arr[i]);
            sum=sum+arr[i];
            c++;
        }
        if(c==6)
        {
        sum+=temp;
        }
        else
        {
            int mul=-(temp*(6-c));
            sum=sum+mul+temp;
        }
            cout<<sum<<endl;

    }
    return 0;
}