#include <iostream>
using namespace std;

int main() {
    long long int N,X,T,chef_partner;
    cin >> T;
    while(T--)
    {
        cin >> N >> X ;
        chef_partner = 2*N - (X-1);
        cout << chef_partner << endl;
    }
	// your code goes here
	return 0;
}
