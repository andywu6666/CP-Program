//Accepted
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	long long int C = 0; // modify to long long
	cin >> C;
	for (int i = 0; i < C; i++)
	{
		long long int s1 = 0, s2 = 0; //s = (x + y + 1)(x + y) / 2 + x;
		long long int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		s1 = ((x1 + y1 + 1) * (x1 + y1)) / 2 + x1;
		s2 = ((x2 + y2 + 1) * (x2 + y2)) / 2 + x2;






		cout << "Case " << i + 1 << ": " << (s2 - s1) << endl;
	}











	return 0;
}
