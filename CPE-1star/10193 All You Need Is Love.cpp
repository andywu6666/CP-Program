#include <iostream>
#include <string>
using namespace std;

long long int twoToTen(string s)
{
    long long int dec_val = 0;
    int power2 = 1;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            dec_val += power2;
        }
        power2 *= 2;
    }
    return dec_val;
}

int gcd(long long int a, long long int b)
{
    while (b > 0)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main()
{
    int t = 0;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        long long int n1 = twoToTen(s1);
        long long int n2 = twoToTen(s2);

        cout << "Pair #" << i << ": ";

        if (gcd(n1, n2) > 1)
        {
            cout << "All you need is love!" << endl;
        }
        else
        {
            cout << "Love is not all you need!" << endl;
        }
    }

    return 0;
}