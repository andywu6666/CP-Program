//Accepted
#include <iostream>
#include <map>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    string temp;
    getline(cin, temp);

    while (t--)
    {
        string str;
        map<string, int> species;
        int total = 0;
        while (getline(cin, str) && str != "")
        {
            species[str]++;
            total++;
        }

        for (const auto &n : species)
        {
            cout << n.first << " " << fixed << setprecision(4) << (n.second * 100.0 / total) << endl; // what if total == 0
        }
        if (t > 0)
            cout << endl;
    }

    return 0;
}
