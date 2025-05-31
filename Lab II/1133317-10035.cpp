#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // two unsigned less than 10 digits -> using unsigned long long
    unsigned long long a , b;
    while (cin >> a >> b && a && b)
    {
        vector<int> sum;
        while (a > 0 || b > 0)
        {
            sum.push_back( (a % 10) + (b % 10) );
             a /= 10;
            b /= 10;
        }

        int carry = 0;
        for (int i = 0; i < sum.size(); i++)
        {
            if (sum[i] >= 10)
            {
                sum[i+1] += 1;
                sum[i] -= 10;
                carry++;
            }
        }
        switch(carry)
        {
            case 0:
            cout << "No carry operation." << endl;
            break;
            case 1:
            cout << "1 carry operation." << endl;
            break;
            default:
            cout << carry << " carry operations." << endl;
            break;
        }
    }

    return 0;
}
