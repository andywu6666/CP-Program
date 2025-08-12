#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int M, N, Q;
        cin >> M >> N >> Q;
        cout << M << " " << N << " " << Q << endl;
        cin.ignore();
        vector<vector<char>> grid(M + 1 , vector<char>(N + 1));
        for (int i = 0; i < M; i++)
        {
            string line;
            getline(cin, line);

            for (int j = 0; j < N && j < line.length(); j++)
            {
                grid[i][j] = line[j];
            }
        }
        int r, c;
        for (int t = 0; t < Q; t++)
        {
            int maxL = 1;
            cin >> r >> c;
            char centerChar = grid[r][c];
            // expand algorithm
            for (int k = 1;; k++)
            {
                if (r - k < 0 || r + k >= M || c - k < 0 || c + k >= N)
                    break;

                bool isMatch = true;
                for (int g = c - k; g <= c + k; g++)
                {
                    if (grid[r - k][g] != centerChar || grid[r + k][g] != centerChar)
                    {
                        isMatch = false;
                        break;
                    }
                }
                if (!isMatch)
                    break;

                for (int h = r - k; h <= r + k; h++)
                {

                    if (grid[h][c - k] != centerChar || grid[h][c + k] != centerChar)
                    {
                        isMatch = false;
                        break;
                    }
                }

                if (isMatch)
                {
                    maxL = 2 * k + 1;
                }
                else
                {
                    break;
                }
            }

            cout << maxL << endl;
        }
    }

    return 0;
}