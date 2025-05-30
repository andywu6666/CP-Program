#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int numS = 0;
	while (cin >> numS && numS != 0)
	{
		int forget = 0, total = 0;
		vector<double> vec{ 0 };
		for (int i = 1; i <= numS; i++)
		{
			vec.push_back((i * (i + 1)) / 2);

		}

		//for (int t = 0; t < vec.size(); t++) cout << vec[t] << " " << endl; // for debug
		if (numS == 1)
		{
			cout << 2 << " " << 2 << endl;
		}
		else if (numS == 2)
		{
			cout << 1 << " " << 2 << endl;
		}
		else
		{
			forget = vec[numS - 1] - numS;
			total = vec[forget];
			cout << forget << " " << total << endl;;
		}
	}










	return 0;
}
