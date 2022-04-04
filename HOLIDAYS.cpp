#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int T,N,W;
    cin >> T;
    while(T--)
    {
        cin >> N >> W;
        int sum=0;
        vector<int> nums(N);
        for(int i=0;i<N;i++)
        {
           cin >>  nums[i];
        }
        sort(nums.rbegin(),nums.rend());
        for(int i=0;i<N;i++)
        {
           sum =sum+nums[i];
           if(sum>=W)
           {
               cout << N-1-i << endl;
               break;
           }
           
        }  
    }
       //cout << 0 << endl;
       // break;
        
	// your code goes here
	return 0;
}
