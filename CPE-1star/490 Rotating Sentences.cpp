#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> sentences;
    string input;
    while (getline(cin, input) && input != "")
    {
        sentences.push_back(input);
    }

    size_t maxLen = 0;

    for (int i = 0; i < sentences.size(); i++)
    {
        if (sentences[i].size() > maxLen)
            maxLen = sentences[i].size();
    }

    for (int j = 0; j < sentences.size(); j++)
    {
        if (sentences[j].size() < maxLen)
        {
            sentences[j] += string(maxLen - sentences[j].size(), ' ');
        }
    }

    for (int col = 0; col < maxLen; col++)
    {
        for (int row = sentences.size() - 1; row >= 0; row--)
        {
            cout << sentences[row][col];
        }
        cout << endl;
    }

    return 0;
}