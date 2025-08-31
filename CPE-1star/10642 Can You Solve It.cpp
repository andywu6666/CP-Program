#include <iostream>

using namespace std;

int F(int a, int b)
{
    int S = a + b;
    return (S * (S + 1)) / 2 + a;
}

int main()
{
    int t = 0;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int a1, b1, a2, b2;
        cin >> a1 >> b1 >> a2 >> b2;
        int ans = F(a2, b2) - F(a1, b1);

        cout << "Case " << i << ": ";
        cout << ans << endl;
    }

    return 0;
}