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
const ll inf = (ll)1e9;
const ll N = (ll)3e5 + 5;
const ll mod = (ll)1e9 + 7;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
ll dp[N], arr[N], indx[N], pre_idx[N];

void solve()
{
    ll a, b, c, i, j, k, m, n, o, x, y, z;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // initialize DP array
    dp[0] = -inf;
    for (i = 1; i <= n; i++)
    {
        dp[i] = inf;
    }

    // DP with Binary Search Process
    for (i = 1; i <= n; i++)
    {
        ll dp_idx = upper_bound(dp + 1, dp + n + 1, arr[i]) - dp;
        if (dp[dp_idx - 1] != arr[i])
        {
            dp[dp_idx] = arr[i];
            indx[dp_idx] = i;

            pre_idx[i] = indx[dp_idx - 1];
        }
    }

    ll ans = 0, lst = 0;
    for (i = 1; i <= n; i++)
    {
        if (dp[i] != inf)
        {
            ans = i;
            lst = indx[i];
        }
    }
    vector<int> path;
    while (lst != 0)
    {
        path.pb(arr[lst]);
        lst = pre_idx[lst];
    }
    reverse(path.begin(), path.end());
    cout << ans << "\n";
    for (int i = 0; i < path.sz(); i++)
    {
        cout << path[i] << " \n"[i + 1 == path.sz()];
    }
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

/*
Sample Input:
1
6
10 9 3 5 6 7

Sample Output:
4


*/