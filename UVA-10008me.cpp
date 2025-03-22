#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;



int main(){
    const int length = 1000;
int n = 0;
char alp[28] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char arr[length] = {};
int num[28] = {0};

    cin >> n;
    cin.ignore();
    
    
    for (int i = 0; i < n; i++){
    cin.getline(arr , length);
    for (int j = 0 ; j < strlen(arr); j ++){
        if (isalpha(arr[j])){
        char ch = toupper(arr[j]);
            num[ ch - 'A' ] ++;
        }

    }
}

    for (int g = 0 ; g < 25; g++){
        for (int h = g+1; h < 26; h++){
            if (num[g] < num[h] || (num[g] == num[h] && alp[g] > alp[h]) ){
                int t = num[g];
                num[g] = num[h];
                num[h] = t; 
           
                char temp = alp[g];
                alp[g] = alp[h];
                alp[h] = temp;
            }
        }
    }


    
    for (int k = 0; k < 26; k++){
        if (num[k] == 0)
            continue;
        else
        cout << alp[k] << " " << num[k] << endl;
    }



    return 0;
}