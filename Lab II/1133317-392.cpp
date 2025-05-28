#include <iostream>
#include <vector>

using namespace std;

int main()
{
	const int polynomialSize = 9;
	vector<int> coef(polynomialSize + 1);
	for (int i = 0; i < polynomialSize; i++)
	{
		int temp = 0;
		cin >> temp;
		coef[i] = temp;



	}
	//for (int h = 0; h < coef.size(); h++)
	//		cout << coef[h] << " ";
	for (int j = 0; j < polynomialSize - 1; j++)
	{
		if (coef[j] == 0) {
			continue;
		}
		else if (j != 0 && coef[j] < 0)
		{
			coef[j] = -coef[j];
			cout << " - " << coef[j] << "x^" << polynomialSize - j - 1;
		}
		else
			cout << " + " << coef[j] << "x^" << polynomialSize - j - 1;




	}
	cout << coef[8];
	cout << endl;




	return 0;
}