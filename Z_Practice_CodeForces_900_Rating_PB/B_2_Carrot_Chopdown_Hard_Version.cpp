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
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const ll inf = (ll)1e18;
const ll N = (ll)3e5 + 5;
const ll mod = (ll)1e9 + 7;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

void solve()
{
    ll v, i, j, k, m, n, o, x, y, z;
    cin >> n >> m;

    vll cnt(m + 1);
    for (i = 0; i < n; i++)
    {
        cin >> x;
        cnt[x]++;
    }

    vll pre_sum(m + 1);
    for (i = 1; i <= m; i++)
    {
        pre_sum[i] = pre_sum[i - 1] + cnt[i];
    }

    vll ans(m + 1);

    for (k = 1; k <= min(m, 18ll); k++)
    {
        for (v = 1; v <= m; v++)
        {
            ll cur_ans = 0;
            for (i = v; i <= m; i += v)
            {
                cur_ans += (pre_sum[min(m, i + v - 1)] - pre_sum[i - 1]) * min(i / v, (1ll << k) - 1ll);
            }
            ll special_idx = v * (1 << k);
            if (special_idx <= m)
            {
                cur_ans -= cnt[special_idx] * min(special_idx / v, (1ll << k) - 1ll);
                cur_ans += cnt[special_idx] * (1 << k);
            }
            ans[k] = max(ans[k], cur_ans);
        }
    }

    for (i = 1; i <= m; i++)
    {
        ans[i] = max(ans[i], ans[i - 1]);
        cout << ans[i] << " ";
    }
    cout << "\n";
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