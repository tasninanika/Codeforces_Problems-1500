#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    vector<int> freq(n + 1, 0);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < q; ++i) {
        int l, r;
        cin >> l >> r;
        freq[l - 1] += 1;
        freq[r] -= 1;
    }

    for (int i = 1; i < n; ++i) {
        freq[i] += freq[i - 1];
    }

    freq.pop_back();

    sort(a.begin(), a.end());
    sort(freq.begin(), freq.end());

    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += 1LL * a[i] * freq[i];
    }

    cout << sum << endl;
    return 0;
}

