#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int i = 0, P = 0;
	while (cin >> i) {
		if (i == 0)
			break;
	
	int temp = i;
	string B;
	while (temp > 0){
	
	if (temp % 2 == 1)
		P++;
		
	B += (temp % 2 == 1 ? "1" : "0");
	temp /= 2;
	}
	reverse(B.begin() , B.end() );
		cout << "The parity of " << B << " is " << P << " (mod 2)." << endl;

	P = 0;
	}




	return 0;
}
