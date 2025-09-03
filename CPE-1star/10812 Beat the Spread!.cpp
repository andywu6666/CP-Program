#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int s, d;
        cin >> s >> d; // the score is possible only if s >= d
        int score1, score2;
        score1 = (s - d) / 2;
        score2 = (s + d) / 2;
        if (score1 < score2)
        {
            int temp = score1;
            score1 = score2;
            score2 = temp;
        }

        if (s < d || (s - d) % 2 != 0 || (s + d) % 2 != 0 || score1 < 0 || score2 < 0)
            cout << "impossible" << endl;
        else
            cout << score1 << " " << score2 << endl;
    }

    return 0;
}