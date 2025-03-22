#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main(){
    int n;
    const int maxLen = 1000;  // 假設每行輸入不超過 1000 個字元
    char alp[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";  // 26 個字母
    int num[26] = {0};  // 使用 int 來計算，避免 char 型態可能不足

    cin >> n;
    cin.ignore(); // 忽略換行

    char line[maxLen];
    // 逐行讀取並處理字母計數
    for (int i = 0; i < n; i++){
         cin.getline(line, maxLen);
         for (int j = 0; j < strlen(line); j++){
             if (isalpha(line[j])){
                 char ch = toupper(line[j]);
                 num[ch - 'A']++;
             }
         }
    }

    // 排序：依據 num 數值遞減，若數值相同則依字母的 ASCII 值遞增排序
    for (int g = 0; g < 25; g++){
         for (int h = g+1; h < 26; h++){
             if (num[g] < num[h] || (num[g] == num[h] && alp[g] > alp[h])){
                 // 交換 num
                 int t = num[g];
                 num[g] = num[h];
                 num[h] = t;
                 
                 // 交換 alp (錯誤版本用 t 替換字母，正確應用另一個變數)
                 char temp = alp[g];
                 alp[g] = alp[h];
                 alp[h] = temp;
             }
         }
    }
    
    // 輸出排序後的字母及其對應次數
    for (int i = 0; i < 26; i++){
        if(num[i] == 0)
        continue;
        else
         cout << alp[i] << " " << num[i] << endl;
    }
    
    return 0;
}
