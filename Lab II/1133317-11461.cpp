#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	while (true)
	{
		int count = 0;
		int a, b;
		cin >> a >> b;
		if (a == 0 && b == 0)
			break;
		
		if (a > 1) {
			for (int i = sqrt(a) + 1; i <= sqrt(b) ; i++)
			{
				count++;
			}
		}
		else {
			for (int i = sqrt(a); i <= sqrt(b) ; i++)
			{
				if (sqrt(i) * sqrt(i) == i)
				count++;
			}
		}

		cout << count << endl;

	}



	return 0;
}