#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int v[101];
int dp[1000001];
int n, x;

ll rec_fun(int x)
{
    if (x < 0)
        return 0;
    if (x == 0)
        return 1;
    if (dp[x] != -1)
        return dp[x];

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += rec_fun(x - v[i]);
        ans %= 1000000007;
    }
    return dp[x] = ans;
}
void solve()
{

    cin >> n >> x;
    for (auto &x : v)
        cin >> x;

    memset(dp, -1, sizeof(dp));
    cout << rec_fun(x) << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}