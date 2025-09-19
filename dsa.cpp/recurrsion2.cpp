// SUM OF FIRST N NUMBERS
#include <bits/stdc++.h>
using namespace std;
int total=0;
int sum(int num)
{
    if(num==0)
    return total;
    total=total+num;
    sum(num-1);
}
int main()
{
    cout<<"Enter a number ";
    int n;
    cin >>  n;
    int return1 =sum(n);
    cout << return1;
}