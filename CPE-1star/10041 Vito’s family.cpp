#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> streetNumbers;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            streetNumbers.push_back(temp);
        }

        sort(streetNumbers.begin(), streetNumbers.end());

        int sum = 0;
        int median = streetNumbers[n / 2];
        for (int j = 0; j < streetNumbers.size(); j++)
        {
            int diff = streetNumbers[j] - median;
            if (diff >= 0)
                sum += diff;
            else
                sum -= diff;
        }

        cout << sum << endl;
    }

    return 0;
}