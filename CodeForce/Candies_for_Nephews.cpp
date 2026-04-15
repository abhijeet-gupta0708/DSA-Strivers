#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int ans;
        cin>>n;
        int rem=n%3;
        if(rem==0)
        ans=0;
        else
        ans=3-rem;
        cout<<ans<<endl;
    }
    return 0;
}