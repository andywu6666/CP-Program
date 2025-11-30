//Accepted
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <map>
#include <cctype>
#include <utility>
#include <algorithm>
using namespace std;

bool cmp(pair<char, int> a, pair<char, int> b)
{
    if (a.second < b.second)
        return false;

    if (a.second > b.second)
        return true;

    return a.first < b.first;
}

int main()

{
    map<char, int> counts;
    int t = 0;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; i++)

    {
        string str;
        getline(cin, str);
        for (char c : str)
        {
            if (c == ' ' || !isalpha(c))
                continue;
            counts[toupper(c)]++;
        }
    }

    vector<pair<char, int>> vec;
    for (const auto &n : counts)
    {
        vec.push_back({n.first,n.second});
    }

    sort(vec.begin(), vec.end(), cmp);

    for (int j = 0; j < vec.size(); j++)
    cout << vec[j].first << " " << vec[j].second << endl;

        return 0;
}