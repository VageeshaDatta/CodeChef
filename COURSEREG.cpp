#include <iostream>
using namespace std;

int main() {
    int T,N,M,K;
    cin >> T;
    while(T--)
    {
        cin >> N >> M >> K;
        if((M-K)<N)
          cout << "No" << endl;
        else
          cout << "Yes" << endl;
    }
	// your code goes here
	return 0;
}
