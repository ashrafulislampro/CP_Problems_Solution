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

void build(int n, int l, int r)
{
    if (l == r)
    {
        tre[n] = arr[l];
        return;
    }
    int mid = l + (r - l) / 2;
    build(2 * n, l, mid);
    build(2 * n + 1, mid + 1, r);

    // sum of two child
    tre[n] = tre[2 * n] + tre[2 * n + 1];
}

void update(int n, int l, int r, int i, ll v)
{
    if (i > r || i < l)
        return;

    if (i == l and i == r)
    {
        tre[n] = v;
        return;
    }

    int mid = l + (r - l) / 2;
    update(2 * n, l, mid, i, v);
    update(2 * n + 1, mid + 1, r, i, v);

    tre[n] = tre[2 * n] + tre[2 * n + 1];
}

ll sum(int n, int l, int r, int i, int j)
{
    if (i > r || j < l)
        return 0;
    if (l > r)
        return 0;
    if (l == i and r == j)
    {
        return tre[n];
    }

    int mid = l + (r - l) / 2;
    ll sum1 = sum(2 * n, l, mid, i, min(j, mid));
    ll sum2 = sum(2 * n + 1, mid + 1, r, max(i, mid + 1), j);

    return sum1 + sum2;
    // return (sum(2 * n, l, mid, i, min(j, mid)) + sum(2 * n + 1, mid + 1, r, max(i, mid + 1), j));
}

void solve()
{
    ll n, q, ty, i, j, v;
    cin >> n >> q;

    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    build(1, 1, n);

    while (q--)
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
            cout << sum(1, 1, n, i + 1, j) << "\n";
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