#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll price[1005], books[1005];

void solve() {
    ll N, X;
    cin >> N >> X;
    for (ll i = 0; i < N; i++) cin >> price[i];
    for (ll i = 0; i < N; i++) cin >> books[i];

    vector<ll> dp(X+1, 0);
    for (ll i = 0; i < N; i++) {
        for (ll j = X; j >= price[i]; j--) {
            dp[j] = max(dp[j], dp[j - price[i]] + books[i]);
        }
    }
    cout << dp[X] << "\n";
}

int main() {
    ASHRAFUL
    solve();
    return 0;
}
