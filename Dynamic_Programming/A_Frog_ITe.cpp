#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long
// Using Iterative
vector<ll> dp(100001, -1);
void solve()
{
    int n;
    cin >> n;

    int v[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    };

    dp[1] = 0;                // amra 1 a achi kono kharoch haini.
    dp[2] = abs(v[1] - v[2]); // 1 theke 2 te jump krar kharochh

    for (int i = 3; i <= n; i++)
    {
        // i-1 theke ashbo
        ll cost1 = abs(v[i] - v[i - 1]) + dp[i - 1];
        // i-2 theke ashbo
        ll cost2 = abs(v[i] - v[i - 2]) + dp[i - 2];
        dp[i] = min(cost1, cost2);
    }
    cout << dp[n] << endl;
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    solve();
    return 0;
}