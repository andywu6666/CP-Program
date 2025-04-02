#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int followCapacity = 2 * a + 100;
    
    cout << followCapacity - b << endl;



    return 0;
}