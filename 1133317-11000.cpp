#include <iostream>
#include <vector>
using namespace std;

int main()
{
	long long N, total = 0;
	long long male = 1, female = 0;
	vector<long long> male_arr;
	vector<long long> total_arr;
	//initially one female bee, after N years, that would be total amount of bees.
	//male amount = 1, 2, 4, 7... fibinanci number???
	while (true) //one female bee give birth to one male bee
	{
		cin >> N;
		if (N == -1)
			break;

		//first year
		if (N == 1) {
			male = 1;
			female = 0;
			total = 2;
			male_arr.push_back(male);
			total_arr.push_back(total);
			goto print;
		}
		else if (N == 2)
		{
			male = 2;
			female = 1;
			total = 4;
			male_arr.push_back(male);
			total_arr.push_back(total);
			goto print;
		}
		else { // N >= 3
			
			
			int temp_male = total;
				male_arr.push_back(total);
				total = total * 2 - male_arr[N - 2 - 1];
				male = temp_male;
				total_arr.push_back(total);

			
		}

		print:
		cout << male << " " << total << endl;


	}



	return 0;
}