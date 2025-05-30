#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool checkIsOver (long long time, vector<int> & machines,long long t)
{
    long long total = 0;
    for (int k : machines)
    {
        total += time / k;
        if (total >= t)
        return true;
    }



    return false;
}




int main()
{
    int n, t; // there are n machines , the goal is t products
    cin >> n >> t;

    vector<int> arr(n); //storing each machines' making time
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; //need to allocate sufficient array size first
    }
    sort(arr.begin(),arr.end());

    long long time = 1;
    long long low, high, mid, ans;
    low = 1;
    high = (long long)arr.front() * t;
    ans = high;

    while (low <= high)
    {
        mid = low + (high - low) / 2;
        
       
        
            if (checkIsOver(mid, arr, t) )
            {
                high = mid - 1;
                ans = mid;
            }
            else{
                low = mid + 1;
            }

        


    }

    cout << ans << endl;
    return 0;
}