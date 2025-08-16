#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{

    int t = 0;
    cin >> t;
    for (int X = 1; X <=t; X++)
    {
        if (X > 1)
            cout << endl;

        int costs[37];
        for (int i = 0; i < 36; i++)
        {
            cin >> costs[i];
        }

        int seq = 0;
        cin >> seq;
        vector<int> sequence(seq + 1, 0);

        cout << "Case " << X << ":" << endl;


        for (int j = 0; j < seq; j++)
        {
            cin >> sequence[j];

            long long min_cost = LLONG_MAX;
            vector<int> cheapest_base;

            for (int base = 2; base < 37; base++)
            {
                long long current_cost = 0;
                int temp_N = sequence[j];
                //adding handle for 0 case
                if (temp_N == 0)
                current_cost = costs[0];

                while (temp_N > 0)
                {
                    current_cost += costs[temp_N % base];
                    temp_N /= base;
                }
                if (current_cost < min_cost)
                {
                    min_cost = current_cost;
                    cheapest_base.clear();
                    cheapest_base.push_back(base);
                }
                else if (current_cost == min_cost)
                {
                    cheapest_base.push_back(base);
                }
            }
            
            cout << "Cheapest base(s) for number " << sequence[j] << ": ";
            for (int c = 0; c < cheapest_base.size(); c++)
            {
                cout << cheapest_base[c];
                if (c < cheapest_base.size() - 1)
                    cout << " ";
            }
            cout << endl;
        }
    }

    return 0;
}