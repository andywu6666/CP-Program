#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long int m, n;
    while (cin >> m >> n)
    {
        bool flag = true;
        vector<long long int> vec;
        if (m <= 2 || n < 1) flag = false;
        vec.push_back(m);
        while (m % n == 0 && n > 1)
        {
                m /= n;
                vec.push_back(m);
        }
        
        if (flag)
        {
            for (int i = 0; i < vec.size(); i++)
            {
                cout << vec[i];
                if (i != vec.size() - 1)
                    cout << " ";
            }
        }
        else
        {
            cout << "Boring!";
        }
        cout << endl;
    }
}
