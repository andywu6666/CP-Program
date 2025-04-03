#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a, b;
    cin >> a >> b;
    double s = a / b;
    cout << fixed << setprecision(3) << s << endl;



    return 0;
}