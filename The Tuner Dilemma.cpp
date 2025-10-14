//Accepted
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    vector<long long int> ps;
    cin >> N;
   

        for (int i = 0; i < N; i ++)
        {
            int temp;
            cin >> temp;
            ps.push_back(temp);
        }

        //找出中位數 計算每個值離中位數總和最小
        sort(ps.begin(), ps.end());
        long long int mid = N / 2;
        

        long long int ans = 0;
        for (int j = 0; j < ps.size(); j++)
        {
            ans +=   abs( ps[j] - ps[mid] );   
        } 

        cout << ans << endl;
    
}