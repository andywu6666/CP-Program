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
// char:A10_c
// string:NSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
// array int:A20_i
// vector<int>:St6vectorIiSaIiEE