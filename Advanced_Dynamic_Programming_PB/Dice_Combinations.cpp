#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
vector<ll> dp(1000001, -1);
ll rec_dp(ll rem_s)
{
    if (rem_s == 0)
        return 1;

    // if (dp[rem_s] != -1)
    //     return dp[rem_s];

    ll ans = 0, info = 1000000000 + 7;
    for (ll i = 1; i <= 6 and rem_s - i >= 0; i++)
    {
        ans += rec_dp(rem_s - i);
        ans = ans % info;
    }
    dp[rem_s] = ans;
    return ans;
}
void solve()
{
    ll n;
    cin >> n;
    cout << rec_dp(n) << endl;
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