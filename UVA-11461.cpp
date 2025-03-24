#include <iostream>
#include <cmath>
using namespace std;



int main(){
int squareCount = 0;
int a, b;
while(cin >> a >> b && (a != 0 && b != 0)){
    for (int i = a ; i <= b; i++){
        if ( (i / sqrt(i) ) == 0 )
        squareCount++;
    }



}
cout << squareCount << endl;


}