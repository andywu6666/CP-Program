#include <iostream>
#include <vector>
using namespace std;

int main()
{
	long long N, total = 0;
	long long male = 1, female = 0;
	vector<long long> male_arr;
	vector<long long> female_arr;
	//initially one female bee, after N years, that would be total amount of bees.
	while (true) //one female bee give birth to one male bee
	{
		cin >> N;
		if (N == -1)
			break;

		//first year
		
			male = 1;
			female = 0;
			total = 2;
			male_arr.push_back(male);
			female_arr.push_back(female);
		
			for (int i = 1; i < N; i ++){
			male = male_arr.back() + female_arr.back() + 1;
			female += 1;
			male_arr.push_back(male);
			female_arr.push_back(female);
			total = male + female + 1;
			}
			
		cout << male << " " << total << endl;


	}



	return 0;
}