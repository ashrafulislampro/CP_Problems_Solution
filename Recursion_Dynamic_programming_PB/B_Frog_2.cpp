#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long
vector<ll> h;
vector<ll> dp;
int n, k;
ll minCost(ll i)
{
    if (i == 1)
        return 0;
    if (dp[i] != -1)
        return dp[i];

    ll ans = LLONG_MAX;
    for (int j = i - 1; j >= max(1ll, i - k); j--)
    {
        ll cost = minCost(j) + abs(h[i] - h[j]);
        ans = min(ans, cost);
    }

    return dp[i] = ans;
}
void solve()
{

    cin >> n >> k;
    
    h.resize(n + 1);
    dp.assign(n + 1, -1);

    for (int i = 1; i <= n; i++)
        cin >> h[i];

    cout << minCost(n) << endl;
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}