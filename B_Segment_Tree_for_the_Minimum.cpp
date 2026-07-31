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
const ll inf = (ll)1e9;
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

    // pull
    tre[n] = min(tre[2 * n], tre[2 * n + 1]);
}
void update(int n, int tl, int tr, int i, int v)
{
    // bahire achhe.
    if (i < tl || i > tr)
        return;

    if (tl == tr)
    {
        tre[n] = v;
        return;
    }
    int mid = tl + (tr - tl) / 2;
    update(2 * n, tl, mid, i, v);
    update(2 * n + 1, mid + 1, tr, i, v);

    // pull
    tre[n] = min(tre[2 * n], tre[2 * n + 1]);
}
int query(int n, int tl, int tr, int l, int r)
{
    if (l > tr || r < tl)
        return inf;

    if (tl >= l and tr <= r)
    {
        return tre[n];
    }

    int mid = tl + (tr - tl) / 2;
    return min(query(2 * n, tl, mid, l, r), query(2 * n + 1, mid + 1, tr, l, r));
}
void solve()
{
    int n, q, ty, id, v, l, r;
    cin >> n >> q;

    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    build(1, 1, n);

    while (q--)
    {
        cin >> ty;
        if (ty == 1)
        {
            cin >> id >> v;
            update(1, 1, n, id + 1, v);
        }
        else
        {
            cin >> l >> r;
            cout << query(1, 1, n, l + 1, r) << "\n";
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

// https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/problem/B