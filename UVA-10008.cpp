#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;



int main(){
int n = 0 , length = 1000;
char alp[28] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char arr[length] = {};
char num[28] = {};

    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    cin.getline(arr , length);
    
    length = strlen(arr);

    for (int j = 0 ; j < 28; j ++){
        if (isalpha(arr[j])){
        arr[j] = toupper(arr[j]);
            num[ arr[j] - 'A' ] ++;
        }

    }

    for (int g = 0 ; g < 26; g++){
        for (int h = g+1; h < 26; h++){
            if (num[g] < num[h] || (num[g] == num[h] && alp[g] > alp[h]) ){
                int t = num[g];
                num[g] = num[h];
                num[h] = t; 
           
                char temp = alp[g];
                alp[g] = alp[h];
                alp[h] = t;
            }
        }
    }


    
    for (int k = 0; k < 28; k++){
        cout << arr[k] << " " << num[k] << endl;
    }



    return 0;
}