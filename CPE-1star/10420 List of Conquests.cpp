#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    map<string, int> conquests;
    int t = 0;
    cin >> t;
    while (t--)
    {
        string sentence;
        cin >> sentence;
        conquests[sentence]++;
        
        string restOfLine;
        getline(cin, restOfLine);
    }
   
    map<string, int>::iterator it;
    for (it = conquests.begin(); it != conquests.end(); it++)
        cout << it->first << " " << it->second << endl;
        
    return 0;
}
