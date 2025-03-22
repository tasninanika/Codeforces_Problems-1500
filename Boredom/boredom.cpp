#include<bits/stdc++.h>
using namespace std;

const int max_a = 100000;

int main(){
    int n;
    cin >> n;

    vector<long long> freq(max_a + 1, 0);
    vector<long long> dp(MAX_A + 1, 0);

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        freq[a] += a;
    }

    dp[0] = 0;
    dp[1] = freq[1];

    for(int i = 2; i <= max_a; i++){
        dp[i] = max(dp[i - 1], dp[i - 2] + freq[i]);
    }

    cout << dp[max_a] << endl;

    return 0;
}
