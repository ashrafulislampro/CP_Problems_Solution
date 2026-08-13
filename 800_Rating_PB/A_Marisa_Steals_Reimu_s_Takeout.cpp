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
    int n, z_cnt = 0, o_cnt = 0, t_cnt = 0, x;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x == 0)
            z_cnt++;
        if (x == 1)
            o_cnt++;
        if (x == 2)
            t_cnt++;
    }
    int mn = min(o_cnt, t_cnt);
    int mx = max(o_cnt, t_cnt);
    mx = mx - mn;
    cout << (z_cnt + mn + (mx / 3)) << "\n";
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