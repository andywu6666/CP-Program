//Accepted
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	//precauculating
		vector <int> table;
		for (int i = 0 ; i < 14145; i++) // numS < 10^8
		{
			table.push_back( (i * (i + 1)) / 2);
		}

	int numS = 0;
	while (cin >> numS && numS != 0)
	{
		// searching
		int ans1, ans2;
		vector<int>::iterator tableIt;
		tableIt = upper_bound(table.begin(), table.end(), numS);
		ans1 = *tableIt - numS; //forgotten page
		ans2 = tableIt - table.begin(); //total pages
		cout << ans1 << " " << ans2 << endl;
	
	}










	return 0;
}
