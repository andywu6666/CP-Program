//Accepted
#include <iostream>
#include <vector>
using namespace std;

bool check(int max_walk, int K, vector<int> &distances)
{
    int days_needed = 1, current_walk = 0;
    for (int dist : distances)
    {

        if (current_walk + dist > max_walk)
        {
            days_needed++;
            current_walk = dist;
        }
        else
            current_walk += dist;
    }

    if (days_needed <= K + 1)
        return true;
    else
        return false;
}

int main()
{

    int N, K;
    while (cin >> N >> K)
    {
        vector<int> distances;
        long long total_distances = 0, max_single_day = 0;
        for (int i = 0; i < N + 1; i++)
        {
            int d = 0;
            cin >> d;
            distances.push_back(d);
            total_distances += d;
            if (d > max_single_day)
                max_single_day = d;
        }
        long long low = max_single_day;
        long long high = total_distances;
        long long ans = high;

        while (low <= high)
        {
            long long mid = low + (high - low) / 2;
            if (check(mid, K, distances))
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        cout << ans << endl;
    }
    return 0;
}