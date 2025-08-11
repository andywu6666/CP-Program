#include <iostream>
#include <string>
using namespace std;

int main()
{
    bool isOpeningQuote = true;
    string sentence;
    while (getline(cin, sentence))
    {

        for (int i = 0; i < sentence.length(); i++)
        {

            if (sentence[i] == '\"')
            {
                if (isOpeningQuote)
                cout << "``";
                else
                cout << "''";
                
                isOpeningQuote = !isOpeningQuote;
            }
            else
             cout << sentence[i];
        }
        cout << endl;
       
    }

    return 0;
}