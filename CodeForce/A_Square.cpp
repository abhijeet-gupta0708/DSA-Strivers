/* You are given 4
 sticks of lengths a
, b
, c
, and d
. You can not break or bend them.

Determine whether it is possible to form a square∗
 using the given sticks.

∗
A square is defined as a polygon consisting of 4
 vertices, of which all sides have equal length and all inner angles are equal. No two edges of the polygon may intersect each other.

Input
The first line contains a single integer t
 (1≤t≤104
) — the number of test cases.

The only line of each test case contains four integers a
, b
, c
, and d
 (1≤a,b,c,d≤10
) — the lengths of the sticks.

Output
For each test case, print "YES" if it is possible to form a square using the given sticks, and "NO" otherwise.

You may print each letter in any case (uppercase or lowercase). For example, the strings "yEs", "yes", "Yes", and "YES" will all be recognized as a positive answer. */
#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin >>t;
    while(t--)
    {
        int sum=0;
        vector<int>arr(4);
        for(int i=0;i<4;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        sort(arr.begin(),arr.end());
       if(arr[0]==arr[3])
       {
           cout<<"Yes"<<endl;
       }
       else
           cout<<"No"<<endl;
    }
   
       
    

    return 0;
}