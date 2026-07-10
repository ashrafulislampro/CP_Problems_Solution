#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
#define ft first
#define sd second
#define pb(x) push_back(x)
#define ph(x) push(x)
#define pp() pop()
#define sz() size()
#define pll pair<ll, ll>

using ll = long long;
const ll inf = (ll)1e18;
const ll N = (ll)3e5 + 5;
const ll mod = (ll)1e9 + 7;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
vector<ll> arr, brr;
ll dp[1005][1005];

ll LCS(ll i, ll j)
{
    if (i == arr.sz() || j == brr.sz())
    {
        return 0;
    }

    if (dp[i][j] != -1)
        return dp[i][j];
    ll ans = 0;
    if (arr[i] == brr[j])
    {
        ans = 1 + LCS(i + 1, j + 1);
    }
    else
    {
        ans = max(LCS(i, j + 1), LCS(i + 1, j));
    }

    return dp[i][j] = ans;
}
void solve()
{
    ll a, b, c, i, j, k, m, n, o, x, y, z;
    cin >> n >> m;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        arr.pb(x);
    }
    for (i = 0; i < m; i++)
    {
        cin >> x;
        brr.pb(x);
    }
    ll mn_a = *min_element(arr.begin(), arr.end());
    ll mn_b = *min_element(brr.begin(), brr.end());

    for (i = 0; i < n; i++)
    {
        arr[i] = arr[i] - mn_a;
    }
    for (i = 0; i < m; i++)
    {
        brr[i] = brr[i] - mn_b;
    }

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= m; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout << LCS(0, 0) << "\n";
}
int main()
{
    ASHRAFUL
    solve();
    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37