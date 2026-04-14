#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

void solve()
{
    ll N, W;
    cin >> N >> W;

    vector<ll> w(N), v(N);
    for (ll i = 0; i < N; i++)
    {
        cin >> w[i] >> v[i];
    }

    vector<ll> dp(100001, 0);

    // Iterative DP

    for (ll i = 0; i < N; i++)
    {
        for (ll j = W; j >= w[i]; j--)
        {
            dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
        }
    }

    cout << dp[W] << endl;
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37