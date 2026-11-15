#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>

using namespace std;
#define ft first
#define sd second
#define pb(x) push_back(x)
#define ph(x) push(x)
#define pp() pop()
#define sz() size()
#define all(x) (x).begin(), (x).end()
#define input(arr)       \
    for (auto &it : arr) \
    cin >> it
#define forr(k, n) for (int i = k; i < n; i++) // k = start,  n = end
#define forrr(k, n) for (int i = k; i >= n; i--)
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
    ll n;
    cin >> n;
    vll arr(n);
    input(arr);

    ll m = n / 2;
    vll l_rr(m), r_rr(m);
    for (int i = 0; i < m; i++)
    {
        l_rr[i] = arr[i];
        r_rr[i] = arr[n - i - 1];
    }

    ll dp[2] = {0, 0};
    ll sw[2] = {0, l_rr[0] != r_rr[0]};

    for (ll i = 1; i < m; i++)
    {
        ll nd[2] = {-1, -1};
        ll ns[2] = {1e18, 1e18};
        for (ll p = 0; p < 2; p++)
        {
            for (ll q = 0; q < 2; q++)
            {
                ll x = p ? r_rr[i - 1] : l_rr[i - 1];
                ll y = q ? r_rr[i] : l_rr[i];
                ll z = p ? l_rr[i - 1] : r_rr[i - 1];
                ll w = q ? l_rr[i] : r_rr[i];

                ll v = dp[p] + abs(x - y) + abs(z - w);
                ll c = sw[p] + (q && l_rr[i] != r_rr[i]);

                if (v > nd[q] || (v == nd[q] and c < ns[q]))
                {
                    nd[q] = v;
                    ns[q] = c;
                }
            }
        }
        for (ll j = 0; j < 2; j++)
        {
            dp[j] = nd[j];
            sw[j] = ns[j];
        }
    }
    ll ans = max(dp[0], dp[1]);
    ll cnt = 1e18;

    for (ll i = 0; i < 2; i++)
    {
        if (dp[i] == ans)
            cnt = min(cnt, sw[i]);
    }

    if (n % 2 == 0)
        ans += abs(l_rr[m - 1] - r_rr[m - 1]);
    else
        ans += abs(l_rr[m - 1] - arr[m]) + abs(r_rr[m - 1] - arr[m]);

    cout << ans << " " << cnt;
}
int main()
{
    ASHRAFUL

    int T = 1;
    cin >> T;
    while (T--)
    {
        solve(), cout << "\n";
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37

// https://www.codechef.com/problems/MIRRORSWAP