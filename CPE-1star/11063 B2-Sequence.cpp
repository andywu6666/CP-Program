//Accepted
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int case_num = 1;
    int n;
    while (cin >> n)
    {
        vector<bool> exists(20100, 0);
        vector<int> sequence(n + 1);
        bool flag = true;

        for (int i = 0; i < n; i++)
        {

            cin >> sequence[i];
            if (sequence[i] < 1 || (i > 0 && sequence[i] <= sequence[i - 1])) //邏輯嚴謹
                flag = false;
        }

        for (int j = 0; j < n; j++)
        {
            if (!flag)
                break;
            for (int k = j; k < n; k++)
            {
                if (exists[sequence[j] + sequence[k]])
                {
                    flag = false;
                    break;
                }
                exists[sequence[j] + sequence[k]] = true;
            }
        }

        if (flag)
            cout << "Case #" << case_num << ": It is a B2-Sequence.\n\n";
        else
            cout << "Case #" << case_num << ": It is not a B2-Sequence.\n\n"; //要多空一行

        case_num++;
    }

    return 0;
}