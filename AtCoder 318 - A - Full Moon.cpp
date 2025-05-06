#include <iostream>
using namespace std;

int main()
{
    int N, M, P;
    cin >> N >> M >> P;
    int FullMoonNum = 0;
    if (N < M)
    FullMoonNum = 0;
    else
    FullMoonNum = (N - M ) / P + 1;
cout << FullMoonNum << endl;



    return 0;
}