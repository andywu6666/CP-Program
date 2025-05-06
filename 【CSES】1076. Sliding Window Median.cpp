#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;


    int* array = new int[n+1];
    int* temp = new int[n + 1];
    int* median = new int[ n - k + 2];
    for (int i = 0 ; i < n; i++)
    {
        cin >> array[i];
        temp[i] = array[i];
    }
    for (int j = 0; j < n - k + 1; j++)
    {
        sort(temp[j], temp[j + k]);     
        median[j] = temp[(j + k) / 2];
        
        for (int g =0 ; g < n; g++)
            temp[g] = array[g];
    }

    for (int h = 0; h < n - k + 1; h++)
        cout << median[h] << " ";

        cout << endl;
    



    return 0;
}