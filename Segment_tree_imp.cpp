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
const ll N = (ll)1e5 + 5;
const ll mod = (ll)1e9 + 7;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

ll tre[4 * N];
ll arr[N];
// build segment tree
void build(int n, int l, int r)
{
    if (l == r)
    {
        // required default
        // tree[n] = 0
        tre[n] = arr[l];
        return;
    }
    int mid = (l + r) / 2;
    build(2 * n, l, mid);
    build(2 * n + 1, mid + 1, r);

    // pull
    tre[n] = min(tre[2 * n], tre[2 * n + 1]);
}

void update(int n, int l, int r, int i, int v)
{
    // baire kina
    if (i < l || i > r)
        return;

    if (l == r)
    {
        tre[n] = v;
        return;
    }

    int mid = (l + r) / 2;
    update(2 * n, l, mid, i, v);
    update(2 * n + 1, mid + 1, r, i, v);

    // pull
    tre[n] = min(tre[2 * n], tre[2 * n + 1]);
}

ll query(int n, int l, int r, int i, int j)
{
    // valid range check if needed
    // if (j < i)
    // {
    //     return 0;
    // }
    if (i > r || j < l)
    { // required default
        return inf;
    }

    if (l >= i and r <= j)
        return tre[n];

    int mid = (l + r) / 2;

    return min(query(2 * n, l, mid, i, j), query(2 * n + 1, mid + 1, r, i, j));
}
void solve()
{
    ll a, b, c, i, j, k, m, n, o, x, y, ty, v;
    cin >> n >> m;

    // build segment tree
    // build(1, 1, n);

    // initial with array elements
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    build(1, 1, n);
    // query
    while (m--)
    {
        cin >> ty;
        if (ty == 1)
        {
            cin >> i >> v;
            update(1, 1, n, i + 1, v);
        }
        else
        {
            cin >> i >> j;
            cout << query(1, 1, n, i + 1, j) << "\n";
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