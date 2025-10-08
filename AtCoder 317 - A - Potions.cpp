//Accepted
#include <iostream>
#include <vector>

using namespace std;



int main()
{
    int N, H, X;
    while (cin >> N >> H >> X)
    {
        vector <int> P;

        
        for (int i = N; i > 0; i--)
        {
            int temp; cin >> temp;
            P.push_back(temp);
        }


        for (int i = 0; i < P.size(); i++)
        {
            if (P[i] + H >= X)
            {
                cout << i + 1 << endl;
                break;
            }
        }
              



    }
}