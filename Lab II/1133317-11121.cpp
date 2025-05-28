#include <iostream>
#include <vector>

using namespace std;

int main() {
	long long T = 0;
	cin >> T;

	for (int c = 1; c <= T; c++) {
		vector<long long> bArr;
		long long binary = 0, number = 0, outcome = 0;
		cin >> number;
		if (number == 0)
			bArr.push_back(0);
		outcome = number;
		while (number != 0) {
			binary = number % (-2);
			outcome = number / (-2);

			
			 if (binary < 0) {
				binary = -binary;
				outcome += 1;
			}


			bArr.push_back(binary);

			number = outcome;
		}


		cout << "Case #" << c << ": ";
		for (long long i = 0; i < bArr.size(); i++)
			cout << bArr[bArr.size() - 1 - i];
	
		cout << endl;

		bArr.clear();


	}




	/*Case #1: 1*/
	return 0;
}