#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int T,X,Y;
    cin >> T;
    while(T--)
    {
        cin >> X >> Y ;
        cout << max(X,Y)- min(X,Y) << endl; 
    }
	// your code goes here
	return 0;
}
