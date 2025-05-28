#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

	int t = 0;
	cin >> t;
	while (t > 0)
	{
		int m, n;
		cin >> m >> n;
		vector<vector<string>> str(m + 2, vector<string>(n + 2 ));

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {

				cin >> str[i][j];
			}


			int repeat = 0;

			for (int j = 0; j < m; j++) {

				if (str[i + 1][j] == str[i][m - 1 - j])
					repeat++;
			}

			cout << m * n - repeat << endl;
		}
		t--;
	}



	return 0;
}