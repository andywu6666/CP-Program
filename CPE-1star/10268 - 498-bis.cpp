#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    string s;
    int x;
    while (cin >> x)
    {
		getline(cin, s); // consume the newline after the integer input
        getline(cin, s);
        stringstream ss(s);
        int base = 1;
        int coef = 0;
        int result = 0;
        vector<int> coefs;
        while (ss >> coef)
        {
            coefs.push_back(coef);
        }
        sort(coefs.begin(), coefs.end());
        for (int i = 1; i < coefs.size(); i++)
        {
            result += pow(x , base - 1) * coefs[i] * i;
            base ++;
        }
        cout << result << endl;
    }
}