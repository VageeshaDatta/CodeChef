#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
   long int T, N, K;
   cin >> T;
   while(T--)
   {
       cin >> N >> K;
       vector<int> nums(N);
       long int i=0, count =0;
       for(long int i=0;i<N;i++)
       {
           cin >> nums[i] ;
           if(nums[i]>K)
           {
             count++;
            
           }
       }
        cout << count << endl;
   }

	return 0;
}
