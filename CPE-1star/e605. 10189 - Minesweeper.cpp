#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, index = 1, bombCount = 0;
    char p;
    while (cin >> m >> n && m != 0 && n != 0)
    {
        vector<vector<char>> map(m + 3, vector<char>(n + 3, '0'));

        for (int i = 1; i < m + 1; i++)
        {
            for (int j = 1; j < n + 1; j++)
            {
                cin >> p;
                map[i][j] = p;
            }
        }

        cout << "Field #" << index << ":" << endl;
        index++;

        for (int t = 1; t <= m + 1; t++)
        {
            for (int v = 1; v <= n + 1; v++)
            {
                if (map[t][v] == '*')
                {
                    cout << '*';
                    continue;
                }
                else if (map[t][v] == '.')
                {
                    for (int g = t - 1; g <= t + 1; g++)
                    {
                        for (int h = v - 1; h <= v + 1; h++)
                        {
                            if (map[g][h] == '*') bombCount++;
                        }
                    }
                    cout << bombCount;
                    bombCount = 0;
                }

            }
            cout << endl;
        }
    }
}