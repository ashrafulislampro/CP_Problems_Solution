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
template <typename T>
using vec = vector<T>;

using ll = long long;
const ll inf = (ll)1e9;
const ll N = (ll)2e6 + 5;
const ll mod = (ll)1e9 + 7;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
ll n;
// first part is "Employee" and second part "Din".
ll arr[25][25];
ll dp[25][N];
bool bit_on(int v, int i)
{
    return ((v >> i) & 1);
}
ll DP(ll i, ll mask)
{
    if (i == n)
    {
        return 0;
    }

    if (dp[i][mask] != -1)
    {
        return dp[i][mask];
    }

    ll ans = inf;
    for (int j = 0; j < n; j++)
    {
        if (!bit_on(mask, j))
        {
            // i ==> din,  j ==> employee
            ans = min(ans, arr[j][i] + DP(i + 1, mask | (1 << j)));
        }
    }

    return dp[i][mask] = ans;
}
void solve()
{
    ll a, b, c, i, j, k, m, o, x, y, z;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    memset(dp, -1, sizeof(dp));
    cout << DP(0, 0) << "\n";
}
int main()
{
    ASHRAFUL

    int T = 1;
    cin >> T;
    while (T--)
        solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37