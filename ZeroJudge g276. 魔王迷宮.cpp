#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    int Case = k;
    vector<vector<int>> arr(n + 5, vector<int>( m + 5 , 0));
    while(Case > 0)
    {
        int r, c, s, t;
        cin >> r >> c >> s >> t;
        if ( r + s > n || c + t > m )
        {
            k--;
        }
        for (int i = 0; i < k; i++)
        {
            vector<vector<vector<int> > > bossLocation(k + 5, vector< vector<int> >(n + 5, vector<int>(m+5, 0)));
            //bossLocation[i] = 
            
            //r + c, s + t
        }        
        for (int j = 0; j < k; j++)
        {
            if (bossLocation[j][])
        }

        Case--;
    }



    return 0;
}