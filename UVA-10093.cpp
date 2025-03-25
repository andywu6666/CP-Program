#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string n;
    int o = 0;
    switch (cin >> n){
        case n < 11:
            o = n - '0' + 1; break;
        
        case n < 38:
            o = n - 'A' + 10; break;

        case n < 63:
            o = n - 'a' + 37; break;

        default:
            cout << "such number is impossible!" << endl; break;

    }

    cout << o << endl;
    //cout << base.size() << endl; //for debug





    return 0;
}