//flip sort
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	
	int n;
	while (cin >> n) {
		int exchangeNum = 0;

		vector<int> arr(n + 2);

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		for (int i = 0; i < n - 1; i++){
			for (int j = i + 1; j < n; j++){
				
					int temp = arr[i];
					if (arr[i] > arr[j]) {
						arr[i] = arr[j];
						arr[j] = temp;
						exchangeNum++;
					}
			}
		}

		cout << "Minimum exchange operations : " << exchangeNum << endl;
		arr.clear();
	}
	return 0;
}