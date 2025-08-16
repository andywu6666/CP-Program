#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
// 1.0, 0.0 recommended

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, I;
        double p, q, result;
        cin >> N >> p >> I;
        if (p > 0)
        {
            q = 1 - p;
            result = (pow(q, I - 1) * p) / (1 - pow(q, N));
        }
        else
            result = 0.0000;

        cout << fixed << setprecision(4) << result << endl;
    }

    return 0;
}