#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;
int main()
{
    char notes[15] = "cdefgabCDEFGAB";
              map<char, vector<int>>fingersNum;

         fingersNum['c'] ={2, 3, 4, 7, 8, 9, 10};
         fingersNum['d'] ={2, 3, 4, 7, 8, 9};
         fingersNum['e'] ={2, 3, 4, 7, 8};
         fingersNum['f'] ={2, 3, 4, 7};
         fingersNum['g'] ={2, 3, 4};
         fingersNum['a'] ={2, 3};
         fingersNum['b'] = {2};
         fingersNum['C'] = {3};
         fingersNum['D'] ={1, 2, 3, 4, 7, 8, 9};
         fingersNum['E'] ={1, 2, 3, 4, 7, 8};
         fingersNum['F'] ={1, 2, 3, 4, 7};
         fingersNum['G'] ={1, 2, 3, 4};
         fingersNum['A'] ={1, 2, 3};
         fingersNum['B'] ={1, 2};
         
    int t = 0;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string input;
        getline(cin, input);
        
        vector<int>counts(12, 0);
            vector<bool>pressed_fingers(12,false);
        for (char ch : input)
        {
              vector<bool>current_fingers(12, false);
              
              for (int j = 0; j < fingersNum[ch].size() ; j++)
                current_fingers[fingersNum[ch][j]] = true;
              
              for (int i = 1; i <= 10; i++)
              if (!pressed_fingers[i] && current_fingers[i])
                counts[i]++;
              
            pressed_fingers = current_fingers;
        }
        
        
        
        for (int k = 1; k <= 10; k++)
        {
            cout << counts[k];
            if (k <= 9)
                cout << " ";
        }
        cout << endl;
        
    }    
   //input contains blank and at most 200 notes      
         
    return 0;
}