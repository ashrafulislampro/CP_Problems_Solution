#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

ll N, W;
ll w[101], v[101];
ll dp[101][100001];
ll save[101][100001];
ll goriberDp(int idx, int rem_w)
{
    if (idx > N)
        return 0;

    if (dp[idx][rem_w] != -1)
        return dp[idx][rem_w];

    ll ans = 0;
    if (w[idx] <= rem_w)
    {
        ll nibo = v[idx] + goriberDp(idx + 1, rem_w - w[idx]);
        if (nibo > ans)
        {
            ans = nibo;
            save[idx][rem_w] = 1;
        }
    }

    ll nibona = goriberDp(idx + 1, rem_w);
    if (nibona > ans)
    {
        ans = nibona;
        save[idx][rem_w] = 0;
    }
    return dp[idx][rem_w] = ans;
}
void solve()
{

    cin >> N >> W;
    for (int i = 1; i <= N; i++)
    {
        cin >> w[i] >> v[i];
    }
    memset(dp, -1, sizeof(dp));
    cout << goriberDp(1, W) << endl;

    int idx = 1, rem_w = W;

    while (idx <= N)
    {
        int nisilam = save[idx][rem_w];
        if (nisilam)
        {
            cout << idx << " ";
            rem_w -= w[idx];
            idx++;
        }
        else
        {
            idx++;
        }
    }
    cout << endl;
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37