#include <iostream>
#include <vector>
using namespace std;

int main()
{

	while (true)
	{
		vector<long long> arr;
		long long num, divisor, sum;
		bool flag = false;
		bool Same = false;
		cin >> num >> divisor;
		sum = num;
		arr.push_back(num);
		while (sum > 1 && divisor > 1)
		{
			if (num == divisor)
			{
				Same = true;
				break;
			}
			else if (num % divisor == 0 ) 
			{

				sum = num / divisor;
				arr.push_back(sum);
				num = sum;
				flag = true;
			}
			else
			{
				flag = false;
				break;
			}
		}
		
		if (flag) {
			for (int i = 0; i < arr.size(); i++)
				cout << arr[i] << " ";

			cout << 1 << endl;
		}
		else if (Same)
		{
			cout << num << " " << 1 << endl;
		}
		else
			cout << "Boring!" << endl;


		arr.clear();

	}





	return 0;
}