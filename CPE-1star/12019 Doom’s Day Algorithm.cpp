#include <iostream>
#include <string>
#include <vector>

using namespace std;

string days[8] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
const int dooms[] = {0, 10, 21, 7, 4, 9, 6, 11, 8, 5, 10, 7, 12};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int M, D;
        cin >> M >> D;
        int dayIndex = 0;
        int difference = D - dooms[M];
        if (difference < 0)
        {
            dayIndex = (difference % 7 + 7) % 7;
        }
        else
        {
            dayIndex = difference % 7;
        }
        cout << days[dayIndex] << endl;
    }

    return 0;
}