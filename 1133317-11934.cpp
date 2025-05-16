#include <iostream>

using namespace std;

int main() {
	int a, b, c, d, l;



	int value = 0;
	int diviableNum = 0;

	while (cin >> a >> b >> c >> d >> l ) {
		if (a == 0 && b == 0 && c == 0 && d == 0 && l == 0)
			break;
		int tempL = 0;
		value = 0;
		diviableNum = 0;

		for (int i = 0; i <= l; i++) {
			value = a * (tempL * tempL) + b * (tempL)+c;

			if (value % d == 0)
				diviableNum++;
			tempL++;
		}

		cout << diviableNum << endl;

	}


	return 0;
}