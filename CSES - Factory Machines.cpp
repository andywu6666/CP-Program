#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, t; // there are n machines , the goal is t products
    cin >> n >> t;

    vector<int> arr; // each machines' making time
    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        cin >> temp;
        arr.push_back(temp); 
    }
    sort(arr.begin(),arr.end());

    int time = 1;
    int makingNum = 0;
    while (makingNum < t)
    {
        int low, high, mid, value;
        low = 0;
        high = arr.size() - 1;
        mid = low + (high - low) / 2;
        value = arr[mid];

       
        
            if (value > time)
            {
                high = mid - 1;
            }
            else if (value < time)
            {
                low = mid + 1;
            }
            else
            {
                makingNum++;
            }
        

        time++;
    }

    cout << time << endl;
    return 0;
}