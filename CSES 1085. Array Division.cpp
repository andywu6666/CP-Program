#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

bool valid(long long int mid, long long int k , vector<int>& vec)
{
    int subarrays_needed = 1;
    long long int current_sum = 0;
    
    for (int num : vec)
    {
        if (num > mid)
        {
            return false;
        }
        if (current_sum + num <= mid)
        {
            current_sum += num;
        }
        else
        {
            subarrays_needed++;
            current_sum = num;
        }
    }
    return subarrays_needed <= k;
}

int main()
{
    int n, k;

    while (cin >> n >> k)
    {
        vector<int> vec(n);
        long long int total_sum = 0;
        int max_val = 0;

        for (int i = 0; i < n; i ++)
        {
            cin >> vec[i];
            total_sum += vec[i];

            if (vec[i] > max_val)
                max_val = vec[i];
        }

        //二分搜尋
        long long int left = max_val;
        long long int right = total_sum;
        long long int ans = right;

        while (left <= right)
        {
            long long int mid = left + (right - left) / 2;
            if (valid(mid, k, vec))
            {
                ans = mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        cout << ans << endl;

    }
    return 0;

}