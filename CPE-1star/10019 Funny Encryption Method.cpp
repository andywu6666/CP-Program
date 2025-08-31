#include <iostream>
#include <string>

using namespace std;

int countOnes(int num)
{
    int cnt = 0;
    while (num > 0)
    {
        cnt += (num & 1); // take the last digit
        num >>= 1;        // shift right by one position
    }
    return cnt;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        int b1, b2;

        b1 = countOnes(num);

        string hex = to_string(num);
        int hexValue = stoi(hex, nullptr, 16);
        b2 = countOnes(hexValue);

        cout << b1 << " " << b2 << endl;
    }
    return 0;
}