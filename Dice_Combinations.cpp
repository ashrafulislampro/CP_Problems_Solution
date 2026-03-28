#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

// Recursive + Momorization DP
ll rec_dp(int rem_s, vector<ll> &dp)
{
    if (rem_s == 0)
        return 1;

    if (dp[rem_s] != -1)
        return dp[rem_s];

    ll ans = 0;
    for (int i = 1; i <= 6; i++)
    {
        if (rem_s - i >= 0)
        {
            ans = (ans + rec_dp(rem_s - i, dp)) % mod;
        }
    }

    return dp[rem_s] = ans;
}
void solve()
{
    int n;
    cin >> n;
    vector<ll> dp(n + 1);
    // Recursive + Memorization DP
    // cout << rec_dp(n, dp) << endl;

    // Iterative DP
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            if (i - j >= 0)
            {
                dp[i] = (dp[i] + dp[i - j]) % mod;
            }
        }
    }
    cout << dp[n] << endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    // cin >> T;
    while (T--)
        solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37