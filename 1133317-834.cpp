#include <iostream>
#include <string>
using namespace std;

int main() {
	int son, mother; 
	int sumInt, sumSmall;
	string b;

	cin >> son >> mother;
	sumInt = son / mother;
	int b0 = sumInt;
	
	sumSmall = son % mother;
	int b1 = (mother / sumSmall);


	cout << sumInt << " + " << sumSmall << '/' << mother << endl;


	while () {

		int temp = mother;
		mother = sumSmall;
		sumSmall = temp;

		sumSmall -= b1 * mother;

		int b2;
		if (mother / sumSmall < 1)
			b2 = (mother / sumSmall);
		else
			b2 = 1;

	}


	//cout << b0 << " " << b1 << b2;

	return 0;
}