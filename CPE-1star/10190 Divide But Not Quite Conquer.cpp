#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n, m;
    while (cin >> n >> m) {
        if (m <= 1 || n < 1) { // m <= 1 不行, n <= 0 不行
            cout << "Boring!" << endl;
            continue;
        }

        vector<long long> seq;
        seq.push_back(n);

        while (n > 1 && n % m == 0) {
            n /= m;
            seq.push_back(n);
        }

        if (n == 1) {
            for (int i = 0; i < seq.size(); i++) {
                if (i) cout << " ";
                cout << seq[i];
            }
            cout << endl;
        } else {
            cout << "Boring!" << endl;
        }
    }
    return 0;
}
