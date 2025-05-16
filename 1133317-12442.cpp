#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int T = 0;
	cin >> T;

	for (int g = 0; g < T; g++)
	{
		int numN = 0;
		int min_req = 0;
		cin >> numN;
		vector<bool> oneTonine(numN + 1, false);
		for (int i = 0; i < numN; i++)
		{
			int a, b;
			cin >> a >> b;
			vector<int> temp;
			temp.push_back(a);
			temp.push_back(b);
			if (temp.size() > 3)
			{
				if (temp[i] == temp[i - 1] || temp[i] == temp[i - 2])
					oneTonine[a - 1] = false;
				oneTonine[b - 1] = false;
				
			}
			else {
				oneTonine[a - 1] = true;
				oneTonine[b - 1] = true;
			}
		}
		for (int j = 0; j < oneTonine.size(); j++)
		{
			if (oneTonine[j] == true ) {
				min_req = j + 1;
				break;
			}
		}

		
		cout << "Case " << g + 1 << ": " << min_req << endl;

		oneTonine.clear();
	}







	return 0;
}