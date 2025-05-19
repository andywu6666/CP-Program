#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int> > is_covered(101, vector<int>(101,0) );
    int N, A, B, C, D, count;
    cin >> N;
    for (int Case = 0; Case < N; Case++)
    {
    cin >> A >> B >> C >> D;

    for(int i = A; i < B; i++){
        for(int j = C; j < D; j++){
            if (is_covered[i][j] == 1){ //already covered
            continue;
            }
    
            is_covered[i][j] = 1;
        }
    }

    }
    for (int a = 0; a < 101; a++)
        for (int b = 0; b < 101; b++)
            if (is_covered[a][b])
                count++;

        cout << count << endl;

    return 0;
}