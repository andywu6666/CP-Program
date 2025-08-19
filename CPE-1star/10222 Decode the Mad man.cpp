#include <iostream>
#include <string>
#include<cctype>

using namespace std;



int main()
{
    string keyBoard = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string encodedWords, decodedWords;
    getline(cin, encodedWords);

    for(char c : encodedWords)
    {
        if (c == ' ')
            decodedWords += ' ';
        
        int index = keyBoard.find(tolower(c));
        if (index != string::npos && index >= 2)
            decodedWords += keyBoard[index - 2];

    }
    cout << decodedWords << endl;


    return 0;
}