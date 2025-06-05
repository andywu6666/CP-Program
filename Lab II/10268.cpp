//Accepted
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	int x;

	while (cin >> x)
	{

		string Coefs;
		getline(cin, Coefs); // clear buffer
		getline(cin, Coefs);
		stringstream setCoefs(Coefs);
		vector<int>coef;
		int c = 0;
		while (setCoefs >> c)
		{
			coef.push_back(c); 
		}
		long long dCoef = 0;
		long long dValue = 0;
		
		for (int i = 0; i < coef.size() - 1; i++)
		{
			dCoef = coef[i]  * (coef.size() - 1 - i);
			dValue = dValue * x + dCoef;
		}
		
		cout << dValue << endl;
		
		
		
	}
	
	
	
	
	
	
	return 0;
}
