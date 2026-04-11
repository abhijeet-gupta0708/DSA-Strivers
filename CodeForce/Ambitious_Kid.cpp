#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

       
        int temp;
        vector<int>arr={-2,6,5,3};
        // for (int i = 0; i < n; i++) {
        //     cin>> arr[i];
        // }

        temp=abs(arr[0]);
        for(int i=1;i<arr.size();i++)
        {
            if(abs(arr[i])<temp)
            temp=abs(arr[i]);
            
        }
        int count=0;
        while (temp--)
        {
            count++;
        }
        
        
        cout <<count<< endl;
    

    return 0;
}