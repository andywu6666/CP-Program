#include <iostream>
using namespace std;
int main()
{
    int n, count;

    cin >> n;

    //count = 0;
    // for (int i = n; n > 0; i--)
    // {
    //     n /= 2;
    //     count++;
    // }
    do{
        count = 0;
    }
    while (n > 0);
    {
        n /= 2;
        count++;
    }
    cout << count << "\n";

    return 0;
}