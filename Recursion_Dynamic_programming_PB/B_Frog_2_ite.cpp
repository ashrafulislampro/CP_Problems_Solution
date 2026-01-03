#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long
vector<ll> dp(100001, LLONG_MAX);
void solve()
{
    int n, k;
    cin >> n >> k;

    vector<ll> h(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> h[i];

    dp[1] = 0;                   // 1 theke 1 a ashte kharochh hai 0
    for (int i = 2; i <= n; i++) // 2 theke n prjanto jabo.
    {
        ll ans = LLONG_MAX;
        for (int j = i - 1; j >= i - k; j--)
        { // j = i -1, i - 2, i - 3,...,i -k
            if (j <= 0)
                break;
            ll cost = dp[j] + abs(h[i] - h[j]); // 1 to j = (1 to j) + (i to j) j == middleman
            ans = min(ans, cost);
        }
        dp[i] = ans;
    }
    cout << dp[n] << endl;
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // int T = 1;
    // cin >> T;
    // while (T--)
    solve();
    return 0;
}