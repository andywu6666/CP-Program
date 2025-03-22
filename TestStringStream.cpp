#include <iostream>
#include <sstream>
#include <cstring>
#include <typeinfo>
using namespace std;
int main(){
    stringstream convert;
    int number1 = 25;
    convert << number1;
    char number2[3] = {};
    convert >> number2;
    cout << "I'm char type " <<typeid(number2).name() << endl;
}