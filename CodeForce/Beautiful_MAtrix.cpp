#include<iostream>
using namespace std;
int main()
{
    int arr[5][5];
    int x,y;
    // Taking Input & Storing Position of 1;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            int n;
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                x=i+1;
                y=j+1;
            }
        }
    }

    // Counting Steps to go to pos 3,3

    int c1=abs(x-3);
    int c2=abs(y-3);
    int sum=c1+c2;
    cout<<sum;





}