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

ll n;
vector<ll> arr, dp;

ll LIS()
{
    dp.resize(n + 1, inf);
    dp[0] = -inf;

    for (ll i = 0; i < n; i++)
    {
        ll idx = upper_bound(dp.begin(), dp.end(), arr[i]) - dp.begin();
        if (dp[idx - 1] < arr[i] && arr[i] < dp[idx])
        {
            dp[idx] = arr[i];
        }
    }

    ll ans = 0;
    for (ll i = 0; i <= n; i++)
    {
        if (dp[i] < inf)
            ans = i;
    }
    return ans;
}
void solve()
{
    cin >> n;
    arr.resize(n, 0);
    for (auto &it : arr)
        cin >> it;

    cout << LIS() << "\n";
}

int main()
{
    ASHRAFUL
    solve();
    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37
