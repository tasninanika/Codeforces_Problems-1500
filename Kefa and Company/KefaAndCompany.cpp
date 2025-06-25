#include<iostream>
using namespace std;

int main() {
    int n;
    long long d;
    cin >> n >> d;

    vector<pair<long long, long long>> friends(n);

    for(int i = 0; i < n; i++){
        cin >> friends[i].first >> friends[i].second;
    }

    sort(friends.begin(), friends.end());

    vector<long long> prefix(n + 1, 0);

    for(int i = 1; i <= n; i++){
        prefix[i] = prefix[i - 1] + friends[i - 1].second;
    }

    vector<long long> money(n);
    for(int i = 0; i < n; i++){
        money[i] = friends[i].first;
    }

    long long maxFriendship = 0;

    for(int i = 0; i < n; i++){
        long long maxMoney = money[i] + d - 1;

        int j = upper_bound(money.begin(), money.end(), maxMoney) - money.begin();

        long long totalFriendship = prefix[j] - prefix[i];
        maxFriendship = max(maxFriendship, totalFriendship);
    }

    cout << maxFriendship << endl;

    return 0;
}

