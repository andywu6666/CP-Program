#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#define _USE_MATH_DEFINES

using namespace std;

const int r = 6440;
int main()
{
    double s, a;
    string unit;
    while (cin >> s >> a >> unit)
    {
        double deg;
        double theta;
        if (unit == "min")
        {
            deg = a / 60;
        }
        else if (unit == "deg")
        {
            deg = a;
        }

        if (deg > 180)
            deg = 360 - deg;

        theta = deg * (M_PI / 180);

        double arc = (s + r) * theta;
        double chord = 2 * (s + r) * sin(theta / 2);
        cout << fixed << setprecision(6) << arc << " " << chord << endl;
    }

    return 0;
}