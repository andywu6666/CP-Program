#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main()
{
	int T = 0;
	cin >> T;
	while (T > 0)
	{
		vector<int> live;
		int r = 0;
		cin >> r;

		for (int i = 0; i < r; i++) {
			int temp;
			cin >> temp;
			live.push_back(temp);
		}
		sort(live.begin(), live.end());
		/*for (int h = 0; h < live.size(); h++)
			cout << live[h] << " ";*/
		int mid = 0;
		

		if (live.size() == 1) {
			mid = 0;
		}
		/*else if (live.size() % 2 == 0) {
			mid = live.size() / 2 - 1;
		}*/
		else {
			mid = live.size() / 2 ;
		}
		int totalDistance = 0;
		for (int j = 0; j < live.size(); j++)
		{
			if (live[j] >= live[mid])
				totalDistance += live[j] - live[mid];
			else
				totalDistance += -(live[j] - live[mid]);


		}

		/*if (mid >= 1 && live.size() >= 3) {
			int compDistance = 0;
			for (int c = mid - 1; c <= mid + 1; c++)
			{
				if (live[c] >= live[mid])
					compDistance += live[c] - live[mid];
				else
					compDistance += -(live[c] - live[mid]);
			}
			if (compDistance < totalDistance)
				totalDistance = compDistance;
		}*/
		//cout << endl;
		cout << totalDistance << endl;
		live.clear();
		T--;
	}





	return 0;
}