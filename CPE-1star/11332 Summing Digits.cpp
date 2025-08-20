#include <iostream>
#include <string>
using namespace std;

int addingDigits(string seq)
{
    int digit = 0;
    for (char c : seq)
    {
        digit += c - '0';
    }
    seq = to_string(digit);

    if (seq.length() > 1)
        return addingDigits(seq);
    else
        return digit;
}

int main()
{
    string seq;
    while (cin >> seq && seq != "0")
    {
        int answer = addingDigits(seq);
        cout << answer << endl;
    }

    return 0;
}