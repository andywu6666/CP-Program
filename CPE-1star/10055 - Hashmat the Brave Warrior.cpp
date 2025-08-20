#include <iostream>

using namespace std;

int main()
{
    long long s, o;
    while (cin >> s >> o)
    {
        if (o > s)
        cout << o - s << endl;
        else
        cout << s - o << endl;
    }
    return 0;
}