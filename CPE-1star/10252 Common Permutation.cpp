#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string input, input2;
    while (getline(cin, input) && getline(cin, input2))
    {

        // create two strings' alphabet tables
        vector<int> alphaExist(26, 0);
        vector<int> alphaExist2(26, 0);
        vector<char> ans;
        for (char c : input)
        {
            alphaExist[c - 'a']++;
        }

        for (char g : input2)
        {
            alphaExist2[g - 'a']++;
        }

        string result = "";
        for (int i = 0; i < 26; i++)
        {
            int common_count = min(alphaExist[i], alphaExist2[i]);
            result += string(common_count, 'a' + i);
        }
        cout << result << endl;
    }
    return 0;
}