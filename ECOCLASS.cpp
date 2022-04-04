#include <iostream>
#include<vector>
using namespace std;

int main() {
    int T,N;
    cin >> T;
    while(T--)
    {
    //count=0;
    cin >> N ;
    vector<int> S(N),D(N);
    for(int i=0;i<N;i++)
    {
         cin >> S[i] ;
        
    }
    for(int i=0;i<N;i++)
    {
        cin >> D[i];
    }
    int count=0;
    for(int i=0;i<N;i++)
    {
        if(S[i] == D[i])
             count++;
    }
    cout << count << endl;
	// your code goes here
	
    }
	return 0;
}
