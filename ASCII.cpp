#include<iostream>
#include<cstdlib>

#include <algorithm>
using namespace std;

int main()
{
    char ch = 'a';
    cout << (int)ch << "\n";
    cout << int(ch) << "\n";

    //max
    cout << max('a', 'b') << "\n";

    //min
    cout << min('a', '+') << "\n";
}