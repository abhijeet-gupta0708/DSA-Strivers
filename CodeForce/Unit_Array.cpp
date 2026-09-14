#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    int t;// test cases
    cin >>t;
    while(t--)
    {
    int operation=0;// no of operations

    // Now taking the inputs 
    int size; // Size of the array 
    cin>> size;
    int sum=0;
    int count=0;
    int count1=0;
    vector<int>arr(size);
    for(int i=0;i<size;i++)
    {
    cin >> arr[i]; 
    if(arr[i]==-1)
    count++;
    else
    count1++;
    }

    if(count%2!=0)
    {
        operation++;
        count--;
        count1++;
    }
    int rem=count-count1;
    if(rem>0)
    operation+=rem;
    
    cout << operation << endl;
}


}