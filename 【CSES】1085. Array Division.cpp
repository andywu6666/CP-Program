#include <iostream>
using namespace std;

int main()
{
    int n, m, p;
    cin >> n >> m >> p;

    int fullMoon = 0, countDay = m;
    
    
    while (countDay <= n){
        fullMoon++;
        countDay += p;
    }

    cout << fullMoon << endl;


    return 0;
}