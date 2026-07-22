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
    ll n, m, x;
    cin >> n >> m;
    vector<ll> arr(n);
    for (auto &it : arr)
        cin >> it;

    // prefix sum
    for (int i = 1; i < n; i++)
    {
        arr[i] += arr[i - 1];
    }

    set<int> motiv;
    while (m--)
    {
        cin >> x;
        x--;
        motiv.insert(x);
    }

    vector<ll> mot;
    for (auto &it : motiv)
    {
        mot.pb(it);
    }
    m = motiv.sz();

    // dp
    ll dp[m];
    dp[0] = abs(arr[mot[0]]);
    for (int i = 1; i < m; i++)
    {
        dp[i] = abs(arr[mot[i]] - arr[mot[i - 1]]) + dp[i - 1];
    }

    ll ans = dp[m - 1] + (arr[n - 1] - arr[mot[m - 1]]);
    cout << ans << "\n";
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

// https://codeforces.com/contest/2244/problem/D