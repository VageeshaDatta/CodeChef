#include <iostream>
using namespace std;

int main() {
    int T, X, Y, A, B, max;
    cin >> T;
    while(T--)
    {
        
      cin >> X >> Y >> A >> B;
       max= 0;
        if(X!=A && X!=B)  
            max++;
        if(Y!=A && Y!=B)
            max++; 
        cout << max << endl;
    }
	// your code goes here
	return 0;
}
