//Accepted
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	long long N, total = 0;
	long long male = 0, normalFemale = 0;
	vector<long long> male_arr;
	vector<long long> normalFemale_arr;
	//initially one female bee, after N years, that would be total amount of bees.
	while (true) //one female bee give birth to one male bee
	{
		cin >> N;
		if (N == -1)
			break;

		if (N == 0){
			cout << 0 << " " << 1 << endl;
			continue;
		}


		
			male = 0;
			normalFemale = 0;
			male_arr.push_back(male);
			normalFemale_arr.push_back(normalFemale);
		
			for (int i = 1; i <= N; i ++){
			male = male_arr.back() + normalFemale_arr.back() + 1;
			normalFemale = male_arr.back();
			male_arr.push_back(male);
			normalFemale_arr.push_back(normalFemale);
			}
			total = male + normalFemale + 1;
			
		cout << male << " " << total << endl;


	}



	return 0;
}