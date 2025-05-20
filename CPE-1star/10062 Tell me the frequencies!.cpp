#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
  
    vector<pair<int, int>> setNum;
    vector <int> array;
    while (getline(cin, a))
    {
          vector<int> alpCount(129, 0);
    vector<bool> toPrint(129, false);

        for (int i = 0; i < a.size(); i++)
        {
            if (alpCount[ (int)a[i] ] == 0)
            array.push_back( (int)a[i] );

            alpCount[ (int)a[i] ]++;
            toPrint[  (int)a[i] ] = true;
        }

        for (int t = 0; t < array.size(); t++)
        {
            setNum.push_back({array[t], alpCount[ array[t] ]});
        }
        sort( setNum.begin(), setNum.end(),  [](const pair<int, int> &a, const pair<int, int> &b){
            if (a.second != b.second)
                return a.second < b.second;
            else
                return a.first > b.first;

        });

       for (int j = 0; j < setNum.size(); j++) {
            const pair<int, int> &p =  setNum[j]; 
        cout << p.first << " " << p.second << endl;
        }
        cout << endl;

        setNum.clear();
        array.clear();
        

    }

    return 0;
}