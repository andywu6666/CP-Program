#include <iostream>
#include <iomanip>
using namespace std;

void process(long long num) {
    bool needSpace = false;

    if (num == 0) return;

    if (num / 10000000 > 0) {
        process(num / 10000000);
        cout << " kuti";
        num %= 10000000;
        needSpace = true;
    }

    if (num / 100000 > 0) {
        if (needSpace) cout << " ";
        cout << num / 100000 << " lakh";
        num %= 100000;
        needSpace = true;
    }

    if (num / 1000 > 0) {
        if (needSpace) cout << " ";
        cout << num / 1000 << " hajar";
        num %= 1000;
        needSpace = true;
    }

    if (num / 100 > 0) {
        if (needSpace) cout << " ";
        cout << num / 100 << " shata";
        num %= 100;
        needSpace = true;
    }

    if (num > 0) {
        if (needSpace) cout << " ";
        cout << num;
    }
}

int main() {
    long long num;
    int index = 1;

    while (cin >> num) {
        cout << setw(4) << index << ".";
        index++;
        cout << " ";
        if (num == 0) cout << 0;
        else process(num);
        cout << "\n";
    }
    return 0;
}
