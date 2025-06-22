#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();

    for (int i = 0; i < n; i++) {
        int a = s[i] - '0';

        if (a % 8 == 0) {
            cout << "YES\n" << a << endl;
            return 0;
        }

        for (int j = i + 1; j < n; j++) {
            int b = a * 10 + (s[j] - '0');

            if (b % 8 == 0) {
                cout << "YES\n" << b << endl;
                return 0;
            }

            for (int k = j + 1; k < n; k++) {
                int c = b * 10 + (s[k] - '0');

                if (c % 8 == 0) {
                    cout << "YES\n" << c << endl;
                    return 0;
                }
            }
        }
    }

    cout << "NO" << endl;

    return 0;
}

