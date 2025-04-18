#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 0, t = 0, index = 1;
    cin >> t;



    while (t > 0)
    {
        char useless1, useless2;
        cin >> useless1 >> useless2 >> n;
        bool hasNegetive = false;
        bool isSymmetric = true;
        vector< vector<long long> > matrix(n, vector<long long>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
                if (matrix[i][j] < 0)
                    hasNegetive  = true;
            }

        }
        if (!hasNegetive) {
            for (int i = 0; i <=  n / 2; i++) {
                for (int j = 0; j < n; j++) {
                    if (matrix[i][j] != matrix[n - 1 - i][n - 1 - j]) {
                        isSymmetric = false;
                        goto check_done;
                    }
                }
            }
        }
        //Test #1: Symmetric.
        check_done:;
        if (isSymmetric && !hasNegetive)
            cout << "Test #" << index << ": Symmetric.\n";
        else
            cout << "Test #" << index << ": Non-symmetric.\n";

        index++;

        t--;
    }
    return 0;
}