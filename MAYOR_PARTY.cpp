#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int T,A,B,C;
    cin >> T;
    while(T--)
    {
        cin >> A >>B >> C;
        cout << max(A+C, B) << endl;
    }
	// your code goes here
	return 0;
}
