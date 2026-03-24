#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
int N, W;
int w[100], v[100];
ll dp[100][100001];
ll rec_dp(int i, int rem_w)
{
    if (i == N or rem_w == 0)
        return 0;

    if (dp[i][rem_w] != -1)
        return dp[i][rem_w];

    ll ans = 0;
    if (w[i] <= rem_w)
    {
        ll nibo = (ll)v[i] + rec_dp(i + 1, rem_w - w[i]);
        ans = max(ans, nibo);
    }

    ll nibona = rec_dp(i + 1, rem_w);
    ans = max(ans, nibona);

    return dp[i][rem_w] = ans;
}
void solve()
{
    cin >> N >> W;
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < N; i++)
    {
        cin >> w[i] >> v[i];
    }

    cout << rec_dp(0, W) << endl;
}
int main()
{
    ASHRAFUL

    solve();
    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37