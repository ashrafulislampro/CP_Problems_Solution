#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

int N, W;
int dp[21][101];
vector<int> w, v;
int rec_fun(int idx, int rem_wt)
{
    if (idx == N)
        return 0;

    if (dp[idx][rem_wt] != -1)
    {
        return dp[idx][rem_wt];
    }
    int ans = 0;

    if (w[idx] <= rem_wt)
    {
        int nibo = v[idx] + rec_fun(idx + 1, rem_wt - w[idx]);
        ans = max(ans, nibo);
    }

    int nibona = rec_fun(idx + 1, rem_wt);
    ans = max(ans, nibona);

    return dp[idx][rem_wt] = ans;
}
void solve()
{
    cin >> N >> W;
    memset(dp, -1, sizeof(dp));
    v.resize(N);
    w.resize(N);
    for (int i = 0; i < N; i++)
    {
        cin >> w[i] >> v[i];
    }

    cout << rec_fun(0, W) << endl;
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37