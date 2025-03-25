#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string s;
    int mx, sum , o;
    while (cin >> s){
        mx = 1;
        sum = 0;
        int i;
        for ( i = 0; i < s.size() ; i++){
            if (s[i] >= '0' && s[i] <= 9)
            o = s[i] - '0'; 
            else if (s[i] >= 'A' && s[i] <= 'Z')
            o = s[i] - 'A' + 10; 
            else if (s[i] >= 'a' && s[i] <= 'z')
            o = s[i] - 'a' + 36; 
            else
            continue;
        }

        if (mx < o)
        mx = o;

        sum += o;

        for (int i = mx ; i < 62 ; i++){
            if (!(i % sum)){
                cout << i + 1 << endl;
            break;
            }

        }
        if (i == 62)
            cout << "such number is impossible!" << endl;

           
        cin.ignore();
    }


    return 0;
}