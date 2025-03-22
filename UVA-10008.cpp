#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main(){
    int n;
    const int maxLen = 1000;  
    char alp[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";  
    int num[26] = {0};  

    cin >> n;
    cin.ignore(); 

    char line[maxLen];

    for (int i = 0; i < n; i++){
         cin.getline(line, maxLen);
         for (int j = 0; j < strlen(line); j++){
             if (isalpha(line[j])){
                 char ch = toupper(line[j]);
                 num[ch - 'A']++;
             }
         }
    }

    
    for (int g = 0; g < 25; g++){
         for (int h = g+1; h < 26; h++){
             if (num[g] < num[h] || (num[g] == num[h] && alp[g] > alp[h])){
                
                 int t = num[g];
                 num[g] = num[h];
                 num[h] = t;
                 
                 
                 char temp = alp[g];
                 alp[g] = alp[h];
                 alp[h] = temp;
             }
         }
    }
    
   
    for (int i = 0; i < 26; i++){
        if(num[i] == 0)
        continue;
        else
         cout << alp[i] << " " << num[i] << endl;
    }
    
    return 0;
}
