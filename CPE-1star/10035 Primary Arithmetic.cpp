#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a, b;
    while (cin >> a >> b && (a != 0 || b != 0))
    {
        int carry = 0, count = 0, sum = 0;
        while (a > 0 || b > 0 )
        {

            int digitA = a % 10;
            int digitB = b % 10;
            sum = digitA + digitB + carry;
            if (sum >= 10)
            {
                carry = 1;
                sum -= 10;
                count++;
            }
            else
            {
                carry = 0;
            }
            a /= 10;
            b /= 10;
        }
        if (count == 0)
            cout << "No carry operation." << endl;
        else if (count == 1)
            cout << "1 carry operation." << endl;
        else
            cout << count << " carry operations." << endl;
    }
}