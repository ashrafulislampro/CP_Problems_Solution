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

ll dp[N], cnt[N];
void solve()
{
    ll a, b, c, i, j, k, m, n, o, x, y, z;
    cin >> n;
    vec<int> arr(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        dp[i] = 0;
        cnt[i] = 0;
    }
    ll ans = 0, mx_cnt = 0;
    for (i = n; i >= 1; i--)
    {
        dp[i] = 1;
        cnt[i] = 1;

        ll mx = 0;
        for (j = i + 1; j <= n; j++)
        {
            if (arr[i] < arr[j])
            {
                if (mx < dp[j])
                {
                    mx = dp[j];
                    cnt[i] = cnt[j];
                }
                else
                {
                    if (mx == dp[j])
                    {
                        cnt[i] += cnt[j];
                        // cnt[i] %= mod;  only for multiply
                        if(cnt[i] >= mod){
                            cnt[i] -= mod;
                        }
                    }
                }
            }
        }
        dp[i] += mx;
        if (ans < dp[i])
        {
            ans = dp[i];
            mx_cnt = cnt[i];
        }
        else
        {
            if (ans == dp[i])
            {
                mx_cnt += cnt[i];

                // mx_cnt %= mod;
                if(mx_cnt >= mod){
                    mx_cnt -= mod;
                }
            }
        }
    }
    cout << ans << " " << mx_cnt << "\n";
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