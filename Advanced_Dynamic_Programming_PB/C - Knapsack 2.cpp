#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    ll N, W, val = 0;
    cin >> N >> W;
    vector<ll> w(N), v(N);
    for (ll i = 0; i < N; i++)
    {
        cin >> w[i] >> v[i];
        val += v[i];
    }

    vector<ll> dp(val + 1, W + 1);

    dp[0] = 0;

    for (ll i = 0; i < N; i++)
    {
        for (ll j = val; j >= v[i]; j--)
        {

            dp[j] = min(dp[j], dp[j - v[i]] + w[i]);
        }
    }
    for (ll i = val; i >= 0; i--)
    {
        if (dp[i] <= W)
        {

            cout << i;
            break;
        }
    }
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}