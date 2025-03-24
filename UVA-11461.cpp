#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b && !(a == 0 && b == 0)) {  // 正確終止條件
        int cnt = 0;
        for (int i = a; i <= b; ++i) {
            int root = static_cast<int>(sqrt(i));
            if (root * root == i) {  // 關鍵判斷式
                ++cnt;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
