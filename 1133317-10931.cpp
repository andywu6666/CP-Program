#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int i = 0, n = 0;
	int B = 0;
	while (cin >> i) {
		if (i == 0)
			break;
	}
	cin >> i;
	int left = i;
	int digits = 0;
// n = 2 ^ n
	while (true) {
		if (pow(2, n) <= i)
			n++;
		else
			break;
	}
	for (; n >= 0; n--) {
		if (left >= pow(2, n)) {
			left -= pow(2, n);
			B += pow(10, n);
			digits++;
		}
	}


	cout << "The parity of " << B << " is " << digits << " (mod 2).";
	return 0;
}