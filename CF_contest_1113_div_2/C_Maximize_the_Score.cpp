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
const ll inf = (ll)1e18;
const ll N = (ll)3e5 + 5;
const ll mod = (ll)1e9 + 7;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

void solve()
{
    ll n, l, r;
    cin >> n;

    ll idx[n + 1]{ }, arr[2 * n + 1], dp[2 * n + 5]{ };

    for (int i = 1; i <= 2 * n; i++)
        cin >> arr[i];

    // iterative dp
    for (int i = 2 * n; i >= 1; i--)
    {
        l = i, r = (!idx[arr[i]] ? i : idx[arr[i]]);
        idx[arr[i]] = i;
        dp[i] = max(1 + dp[i + 1], (r - l + 1) * (r - l + 1) + dp[r + 1]);
    }

    cout << dp[1] << "\n";
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