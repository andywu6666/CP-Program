//Accepted
#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;
const int MAX_VAL = 2001;
void mkPrime(vector<bool>& prime)
{
	prime[0] = false;
	prime[1] = false;
	for (int i = 2; i * i <= MAX_VAL;i ++)
	{
		if (prime[i])
		for (int j = i * i; j <=MAX_VAL; j+= i)
			prime[j] = false;
	}
	
	
}

int main()
{
	vector<bool> prime(MAX_VAL + 1, true);
	mkPrime(prime);
	
	int T;
	cin >> T;
	
	for (int index = 1; index <= T; index++)
	{
		vector<int> count(128,0);
		string input;
		cin >> input;
		set<char> output;
		
		for (char c: input)
		{
			count[c]++;
		}
		
		for (int j = 0; j < 128; j++)
		{
			if (prime[count[j]])
				output.insert(static_cast<char>(j) );
		}
		cout << "Case " << index << ": ";
		if (output.empty()){
		
		 cout << "empty";
		}
		else
		{	
		for (char s: output)
		cout << s;
		}
		cout << endl;
		
		input.clear();
		output.clear();
	}
	
	
	
	
	
	
	
	return 0;
}
