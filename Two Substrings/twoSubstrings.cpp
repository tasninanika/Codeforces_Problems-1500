#include <iostream>
using namespace std;

int main() {
    long long int i, j, f, n, m, x, p, fnd;
    string s;

    while (getline(cin, s)) {
        f = 0;
        p = 0;

        for (i = 0; i < s.size() - 1; i++) {
            if (s[i] == 'A' && s[i + 1] == 'B') {
                fnd = i;
                p = 1;
                break;
            }
        }

        if (p == 1) {
            for (j = fnd + 2; j < s.size() - 1; j++) {
                if (s[j] == 'B' && s[j + 1] == 'A') {
                    f = 1;
                    break;
                }
            }
        }

        if (f == 0) {
            for (i = 0; i < s.size() - 1; i++) {
                if (s[i] == 'B' && s[i + 1] == 'A') {
                    fnd = i;
                    p = 2;
                    break;
                }
            }

            if (p == 2) {
                for (j = fnd + 2; j < s.size() - 1; j++) {
                    if (s[j] == 'A' && s[j + 1] == 'B') {
                        f = 1;
                        break;
                    }
                }
            }
        }

        if (f == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
