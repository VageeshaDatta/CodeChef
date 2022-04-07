#include <iostream>
using namespace std;

int main() {
    int T, A,B,sum,r,required;
    cin  >> T;
    while(T--)
    {
        cin >> A >> B ;
        sum = A+B;
        required= 0;
        while(sum>0)
        {
            r = sum % 10;
            if(r==1)
               required = required +2;
            else if(r==4)
               required = required +4;
            else if(r==7)
               required = required +3;
            else if(r==8)
               required = required +7;
            else if(r==0 || r==6 || r==9)
               required = required +6;
            else 
               required = required +5;
               
            sum = sum/10;
        }
        
        cout << required << endl;
    }
	// your code goes here
	return 0;
}
