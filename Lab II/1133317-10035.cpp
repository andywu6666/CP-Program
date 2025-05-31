#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // two unsigned less than 10 digits -> using unsigned long long
    unsigned long long a , b;
    while (cin >> a >> b && (a != 0 || b != 0))
    {
        int sum;
        int carry = 0, carryCount = 0;
        while (a > 0 || b > 0 || carry > 0)
        {
            sum = (a % 10) + (b % 10) + carry ;
             a /= 10;
            b /= 10;
        
            if (sum >= 10)
            {
                carry = 1;
                carryCount++;
            }
            else
            {
                carry = 0;
            }
       
        }
        switch(carryCount)
        {
            case 0:
            cout << "No carry operation." << endl;
            break;
            case 1:
            cout << "1 carry operation." << endl;
            break;
            default:
            cout << carryCount << " carry operations." << endl;
            break;
        }
        
    }

    return 0;
}
