//Accepted (can be more efficient)
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
			for (int i = 0; i < arr.size(); i++){
				cout << arr[i];
				if (i < arr.size() - 1) //the very last number should not print a space after it
				cout << " ";
			}
			cout << endl;
		}
		else
			cout << "Boring!" << endl;




	}





	return 0;
}