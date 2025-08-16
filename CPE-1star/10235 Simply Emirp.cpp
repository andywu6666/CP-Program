#include <iostream>
#include <vector>
using namespace std;

vector<bool> isPrimes(1000001, true);
void primeTable() // 1<N< 1,000,000
{

    isPrimes[0] = false;
    isPrimes[1] = false;
    for (int p = 2; p * p < 1000001; p++)
    {
        if (isPrimes[p])
            for (int i = p * p; i < 1000001; i += p)
                isPrimes[i] = false;
    }
}

int reverseNumber(int N)
{
    int digit = 0;
    int reverseNum = 0;
    while (N > 0)
    {
        digit = N % 10;
        reverseNum = reverseNum * 10 + digit;
        N /= 10;
    }
    return reverseNum;
}

int main()
{
    primeTable();
    int N;
    while (cin >> N)
    {
        if (isPrimes[N])
        {
            if (isPrimes[reverseNumber(N)] && reverseNumber(N) != N)
                cout << N << " is emirp." << endl;
            else
                cout << N << " is prime." << endl;
        }
        else
            cout << N << " is not prime." << endl;
    }

    return 0;
}