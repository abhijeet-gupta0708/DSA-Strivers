#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter the no of rows and no of col : \n";
    cin>>row>>col;
    int arr[row][col];
    cout<<"Enter the Elements of Array : \n ";
    // Taking the Elements from User
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        cin>>arr[i][j];
    }
     // Set all the elements of rows and column as -1 if the elemts is found to be 0
    int k=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==0)
            {
                while(k<row && k<col)
                {
                    arr[i][k]=-1;
                    arr[k][j]=-1;
                    k++;
                }
            }
        }
    }
    // Printing The array with elements of rows and column as -1
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        cout<<arr[i][j] <<" ";
    }

    // Setting all the elements back to 0 if they are -1
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==-1)
            arr[i][j]=0;
        }
    }
     
    cout<<"\n Final array is : \n";
    // Printing the Final Array 
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        cout<<arr[i][j] <<" ";
    }
}