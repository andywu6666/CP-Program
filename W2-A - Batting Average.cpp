#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a, b;
    double s = 0;
    cin >> a >> b;

    if (a <= 0 || a > 10 || b <= 0 || b >= a)
    cin >> a >> b;

    s = b / a;
    cout << fixed << setprecision(3) << s << endl;



    return 0;
}