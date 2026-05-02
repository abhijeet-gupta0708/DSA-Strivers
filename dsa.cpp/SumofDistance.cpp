#include<iostream>
#include<map>
#include<unordered_map>
#include<vector>
#include<array>
using namespace std;
int main()
{   
    // Entering Test cases
    int t;
    cin>>t;
    vector<int>nums;
    vector<int>arr;
    for(int i=0;i<t;i++)
    {
        int te;
     cin >>te;
     nums.push_back(te);
    }

    unordered_map<int,int>sum;
    unordered_map<int,int>freq;
    // Left side calculation 
    // LEft=(freq*i -sum)
    for(int i=0;i<t;i++)
    {
        int temp=(freq[nums[i]]*i)-sum[nums[i]];
        arr.push_back(temp);
        freq[nums[i]]++;
        sum[nums[i]]+=i;



    }
    // Right Side Calculation 
    // Right== Sum-freq
    freq.clear();
    sum.clear();
    for(int i=t-1;i>=0;i--)
    {
        int temp=(sum[nums[i]]-freq[nums[i]]*i);
        arr[i]+=temp;
        freq[nums[i]]++;
        sum[nums[i]]+=i;

    }
    for(int i=0;i<t;i++)
    {
        cout<<arr[i];


    }




}