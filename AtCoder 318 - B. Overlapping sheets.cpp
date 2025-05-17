#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int> > is_covered;
    int N, A, B, C, D;
    cin >> N;
    for (int Case = 0; Case < N; Case++)
    {
    cin >> A >> B >> C >> D;
    

    int x = A > B ? A - B : B - A; 
    int y = C > D ? C - D : D - C;

    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            is_covered[i][j].push_back(1);

            if (is_covered[i][j] == 1){ //already covered
            continue;
            }
    
        }
    }

    }
        cout << is_covered.size() << endl;

    return 0;
}