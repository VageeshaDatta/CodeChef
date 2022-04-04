#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    long int T,N;
    cin  >> T;
    while(T--)
    {
        cin >> N;
        vector<int> nums(N);
        for(int i=0;i<N;i++)
        {
            cin >> nums[i] ;
        }
        
        cout << accumulate(nums.begin(), nums.end(), 0) - *min_element(nums.begin(), nums.end()) << endl;
    }
	// your code goes here
	return 0;
}
