//Accepted
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{

		int n;
		cin >> n;
		vector<int> vec;
		for (int j = 0; j < n; j++)
		{
			int temp;
			cin >> temp;
			vec.push_back(temp);
		}
		bool flag = true;
		int count = 1; //important(at least one)
		for (int k = 1; k < n; k++)
		{
			if (flag == true && vec[k-1] > vec[k] )
			{
				flag = false;
				count++;
			}
			else if(flag == false && vec[k - 1] < vec[k])
			{
				flag = true;
				count++;
			}
		}
		cout << count << endl;
		vec.clear();
	}
	
	
	
	
	
	return 0;
}
