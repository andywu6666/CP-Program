#include <iostream>
#include <map>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    cin.ignore();
    cin.ignore(); // eat blank line

    for (int tc = 0; tc < t; tc++)
    {
        string treeNames;
        map<string, int> species;
        int total = 0;

        while (getline(cin, treeNames))
        {
            if (treeNames.empty())
                break;
            species[treeNames]++;
            total++;
        }

        for (map<string, int>::iterator it = species.begin(); it != species.end(); it++)
        {
            cout << it->first << " " << fixed << setprecision(4) << (it->second * 100.0 / total) << endl;
        }

        if (tc != t - 1)
        {
            cout << endl;
        }
    }
    return 0;
}