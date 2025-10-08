#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Removed unused global array and variable
int val;

bool valid(const vector<int>& P, int idx, int right, int val)
{
    return idx <= right && P[idx] < val;
}

int main()
{
    int N, H, X;
    while (cin >> N >> H >> X)
    {
        vector <int> P;
        val = H + X; // Assign a value to val
        
        for (int i = N; i > 0; i--)
        {
            int temp; cin >> temp;
            P.push_back(temp);
        }
        sort(P.begin(), P.end());
        
              



    }
}