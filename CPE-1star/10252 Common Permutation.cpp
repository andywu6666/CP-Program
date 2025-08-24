#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string input, input2;
    while (cin >> input)
    {
        cin >> input2;

        // create two strings' alphabet tables
        map<char, int> alphaExist;
        map<char, int> alphaExist2;
        vector<char> ans;
        for (char c : input)
        {
            alphaExist[c]++;
        }

         for (char g : input2)
        {
            alphaExist2[g]++;
        }

        // compare two strings
        for (char d : input2)
        {
            if (alphaExist[d] > 0)
            {
                int min_count = 0;
                if (alphaExist[d] >= alphaExist2[d] && (alphaExist[d] > 1 || alphaExist2[d] > 1))
                    min_count = alphaExist2[d];
                else
                    min_count = alphaExist[d];

                for (int i = 0; i < min_count; i++)
                ans.push_back(d);
            }
        }
        sort(ans.begin(), ans.end());
        for (int j = 0; j < ans.size(); j++)
            cout << ans[j];

        cout << endl;

        alphaExist.clear();
    }
    return 0;
}