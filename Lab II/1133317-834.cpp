//Accepted
#include <iostream>
#include <vector>

using namespace std;
vector<int> coefs;
void solve(int son, int mother)
{
	while (mother != 0)
	{
	
	coefs.push_back(son / mother);
	int remainder = son % mother;
	son = mother;
	mother = remainder;
	

	
}

	cout << "[" << coefs[0] << ";";

	for (int i = 1; i < coefs.size(); i++)
	{

	cout << coefs[i];
	if (i < coefs.size() - 1)
		cout << ",";
	else
	cout << "]" << endl;

	}
coefs.clear();
}

int main()
{
	int mother, son;
	while (cin >> son >> mother)
		solve(son, mother);
	
	return 0;
}
