#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int array[] = {4,6,9,3,1,2,8,5,7,0};
    sort(array, array + (sizeof(array) / sizeof(array[0])), greater<int>() );

    for (int i = 0; i < 10 ; i ++)
    cout << array[i] << " " << endl;

    return 0;
}