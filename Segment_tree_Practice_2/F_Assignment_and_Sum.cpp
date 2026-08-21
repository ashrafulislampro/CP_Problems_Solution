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

ll tre[4 * N], lazy[4 * N];

void propagate(ll n, ll l, ll r)
{
    if (lazy[n] == -1)
        return;
    tre[n] = ((r - l + 1) * lazy[n]);
    if (l < r)
    {
        lazy[2 * n] = lazy[n];
        lazy[2 * n + 1] = lazy[n];
    }
    // default value
    lazy[n] = -1;
}

void update(ll v, ll tl, ll tr, ll l, ll r, ll val)
{
    propagate(v, tl, tr);
    if (l > tr || r < tl)
        return;

    if (tl >= l and tr <= r)
    {
        lazy[v] = val;
        propagate(v, tl, tr);
        return;
    }
    ll mid = tl + (tr - tl) / 2;
    update(2 * v, tl, mid, l, r, val);
    update(2 * v + 1, mid + 1, tr, l, r, val);

    // pull
    tre[v] = tre[2 * v] + tre[2 * v + 1];
}
ll query(ll v, ll tl, ll tr, ll l, ll r)
{
    propagate(v, tl, tr);
    if (l > tr || r < tl)
        return 0;

    if (tl >= l and tr <= r)
    {
        return tre[v];
    }

    ll mid = tl + (tr - tl) / 2;
    return (query(2 * v, tl, mid, l, r) + query(2 * v + 1, mid + 1, tr, l, r));
}
void solve()
{
    ll n, q, l, r, val, ty;
    cin >> n >> q;
    while (q--)
    {
        cin >> ty;
        if (ty == 1)
        {
            cin >> l >> r >> val;
            l += 1;
            // r -= 1;
            update(1, 1, n, l, r, val);
        }
        else
        {
            cin >> l >> r;
            l += 1;
            // r -= 1;
            cout << query(1, 1, n, l, r) << "\n";
        }
    }
}
int main()
{
    ASHRAFUL
    solve();
    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37