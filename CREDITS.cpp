#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	int S;
	while(T--)
	{
	    cin >> S ; 
	    if(S>65)
	     cout << "Overload" << endl;
	    else if(S<35)
	     cout << "Underload" << endl;
	    else
	     cout << "Normal" << endl;
	   
	}
	return 0;
}
