#include <iostream>
#include <string>

using namespace std;

int main(){
    string base[] = {012345678910ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz};
    char n;
    cin >> n;

    int o = n - 'A';
    cout << o << endl;
    cout << base.size() << endl; //for debug





    return 0;
}