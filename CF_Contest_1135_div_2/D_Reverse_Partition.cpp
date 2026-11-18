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

ll modp(ll a, ll b)
{
    a %= mod;
    ll res = 1;
    while (b)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}
ll modi(ll x) { return modp(x, mod - 2); }
vll facto(1000000, -1);
ll fact(ll x)
{
    if (x <= 1)
        return 1;
    if (facto[x] != -1)
        return facto[x];
    return facto[x] = (x * fact(x - 1)) % mod;
}
ll ncr(ll n, ll r)
{
    if (r > n)
        return 0;

    ll tmp = (fact(n) * modi(fact(r))) % mod;
    tmp = (tmp * modi(fact(n - r))) % mod;
    return tmp;
}
void solve()
{
    ll n, m, q;
    cin >> n >> m >> q;
    ll aa[n], p[n];
    for (int i = 0; i < n; i++)
        cin >> aa[i];
    for (int i = 0; i < n; i++)
    {
        p[i] = aa[i];
        if (i)
            p[i] += p[i - 1];
    }

    map<ll, vll> ind;
    for (int i = 0; i < n / 2; i++)
    {
        ll pref = p[i], suff = p[n - 1] - p[n - 2 - i];
        ind[pref - suff].pb(i);
    }
    while (q--)
    {
        ll pos, val;
        cin >> pos >> val;
        pos--;
        if (pos >= n / 2)
        {
            pos = n - pos - 1;
            val = -val;
        }
        ll ager = 2 * (lower_bound(all(ind[0]), pos) - ind[0].begin());
        ll porer = 2 * (ind[-val].end() - lower_bound(all(ind[-val]), pos));
        ll midextra = 0;
        if (n & 1)
        {
            midextra = 1;
        }
        else if (2 * p[n / 2 - 1] + val != p[n - 1])
            midextra = 1;

        cout << ncr(ager + porer - !midextra, m - 1) << "\n";
    }
}
int main()
{
    ASHRAFUL

    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37
// https://codeforces.com/contest/2285/problem/D