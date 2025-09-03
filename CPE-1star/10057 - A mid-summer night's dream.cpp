#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int t = 0;
    while (cin >> t)
    {
        int tt = t;
        vector<int> arr;
        while (t--)
        {
            int n;
            cin >> n;
            arr.push_back(n);
        }
        sort(arr.begin(), arr.end());
        int left = arr[(tt - 1) / 2];
        int right = arr[tt / 2];

        int median = left;

        int count = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] <= right && arr[i] >= left)
                count++;
        }

        int range = right - left + 1;
        cout << median << " " << count << " " << range << endl;
    }

    return 0;
}