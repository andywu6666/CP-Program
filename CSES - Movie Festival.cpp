// Accepted
// Greedy Algorithm
#include <iostream>
#include <vector>
#include <utility>   //pair
#include <algorithm> //sort
using namespace std;

int main()
{
    int c;
    cin >> c;
    vector<pair<long long, long long>> movies(c);
    for (int i = 0; i < c; i++)
    {

        cin >> movies[i].second >> movies[i].first;
    }

    sort(movies.begin(), movies.end());
    long long end_time = 0;
    long long watched = 0;

    for (int j = 0; j < c; j++)
    {
        if (movies[j].second >= end_time)
        {
            watched++;
            end_time = movies[j].first;
        }
    }

    cout << watched << endl;

    return 0;
}