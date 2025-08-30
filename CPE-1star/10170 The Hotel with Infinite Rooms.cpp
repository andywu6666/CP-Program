#include <iostream>

using namespace std;

int main()
{
    long long int D, S;
    while (cin >> S >> D)
    {
        while (D > 0)
        {
            D -= S++;
        }

        cout << S - 1 << endl;
    }

    return 0;
}