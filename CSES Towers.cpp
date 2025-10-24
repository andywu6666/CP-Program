//Accepted
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> cubes(n, 0);
    vector<int> towers;

    for (int i = 0; i < n; i++)
    {
        cin >> cubes[i];
    }

    towers.push_back(cubes[0]);
    for (int j = 1; j < n; j++)
    {
        auto it = upper_bound(towers.begin(), towers.end(), cubes[j]);

        if (it != towers.end())
        {
            *it = cubes[j];
        }
        else
        {
            towers.push_back(cubes[j]);
        }
    }

    cout << towers.size() << endl;

    return 0;
}