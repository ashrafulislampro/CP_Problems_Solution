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
const ll N = (ll)1e5 + 5;
const ll mod = (ll)1e9 + 7;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
ll tre[4 * N], lazy[4 * N], arr[4 * N];
void propagate(ll n, ll l, ll r)
{
    // if(lazy[n] == -1)return;

    tre[n] += (r - l + 1) * lazy[n];
    if (l < r)
    {
        lazy[2 * n] += lazy[n];
        lazy[2 * n + 1] += lazy[n];
    }
    // default value;
    lazy[n] = 0;
}

void build(ll n, ll l, ll r)
{
    if (l == r)
        tre[n] = arr[l];

    ll mid = l + (r - l) / 2;
    build(2 * n, l, mid);
    build(2 * n + 1, mid + 1, r);

    // pull
    tre[n] = tre[2 * n] + tre[2 * n + 1];
}
void update(ll n, ll l, ll r, ll i, ll j, ll val)
{
    propagate(n, l, r);
    if (i > r || j < l)
        return;

    if (l >= i and r <= j)
    {
        lazy[n] += val;
        propagate(n, l, r);
        return;
    }
    ll mid = l + (r - l) / 2;
    update(2 * n, l, mid, i, j, val);
    update(2 * n + 1, mid + 1, r, i, j, val);

    // pull
    tre[n] = tre[2 * n] + tre[2 * n + 1];
}
ll query(ll n, ll l, ll r, ll i, ll j)
{
    propagate(n, l, r);
    if (i > r || j < l)
        return 0;

    if (l >= i and r <= j)
        return tre[n];

    ll mid = l + (r - l) / 2;
    return (query(2 * n, l, mid, i, j) + query(2 * n + 1, mid + 1, r, i, j));
}
void solve()
{
    ll n, q, i, j, ty, val;
    cin >> n >> q;

    while (q--)
    {
        cin >> ty;
        if (ty == 1)
        {
            cin >> i >> j >> val;
            i++;
            update(1, 1, n, i, j, val);
        }
        else
        {
            cin >> i >> j;
            i++;
            cout << query(1, 1, n, i, j) << "\n";
        }
    }
}
int main()
{
    ASHRAFUL
    solve();
    return 0;
}
