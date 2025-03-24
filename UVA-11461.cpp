#include <iostream>
#include <cmath>
using namespace std;



int main(){

int a, b;

while(cin >> a >> b && !(a == 0 && b == 0)){
    int squareCount = 0;
    for (int i = a ; i <= b; i++){
        int root = static_cast<int>(sqrt(i));
        if (root * root == i)
        squareCount++;
    }


    cout << squareCount << endl;
}


return 0;
}