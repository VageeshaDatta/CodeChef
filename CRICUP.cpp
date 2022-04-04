#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int T, X, Y, D;
    cin >> T;
    while(T--)
    {
        cin >> X >> Y >> D;
        if((max(X,Y) - min(X,Y)) <= D)
           cout << "Yes" << endl;
        else
           cout << "No" << endl;
    }
	// your code goes here
	return 0;
}
