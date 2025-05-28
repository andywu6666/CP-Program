#include <iostream>
#include <vector>
using namespace std;

int main()
{

		long long num, divisor;
		
	while (cin >> num >> divisor)
	{
		vector<long long> arr;
		bool flag = false;


		arr.push_back(num);
		while (num > 1 && divisor > 1)
		{
			
			 if (num % divisor == 0 ) 
			{

				num = num / divisor;
				arr.push_back(num);
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

			cout << endl;
		}
		else
			cout << "Boring!" << endl;




	}





	return 0;
}