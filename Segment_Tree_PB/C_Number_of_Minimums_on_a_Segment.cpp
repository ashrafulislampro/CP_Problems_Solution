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
const ll inf = (ll)1e9 + 7;
const ll N = (ll)1e5 + 5;
const ll mod = (ll)1e9 + 7;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
pair<int, int> tre[4 * N];
int arr[N];

pair<int, int> combine(pair<int, int> a, pair<int, int> b)
{
    pair<int, int> ans;
    if (a.first == b.first)
    {
        ans.first = a.first;
        ans.sd = a.sd + b.sd;
        return ans;
    }

    return min(a, b);
}
void build(int n, int l, int r)
{
    if (l == r)
    {
        tre[n] = {arr[l], 1};
        return;
    }
    int mid = l + (r - l) / 2;
    build(2 * n, l, mid);
    build(2 * n + 1, mid + 1, r);

    // combine <- change
    tre[n] = combine(tre[2 * n], tre[2 * n + 1]);
}

void update(int n, int l, int r, int i, int v)
{
    if (i < l || i > r)
    {
        return;
    }
    if (l == r)
    {
        tre[n] = {v, 1};
        return;
    }
    int mid = l + (r - l) / 2;
    update(2 * n, l, mid, i, v);
    update(2 * n + 1, mid + 1, r, i, v);

    // combine <- change
    tre[n] = combine(tre[2 * n], tre[2 * n + 1]);
}

pair<int, int> query(int n, int l, int r, int i, int j)
{
    if (i > r || j < l)
    {
        return {inf, 0};
    }

    if (l >= i && r <= j)
    {
        return tre[n];
    }
    int mid = l + (r - l) / 2;

    // combine <- change
    return combine(query(2 * n, l, mid, i, j), query(2 * n + 1, mid + 1, r, i, j));
}
void solve()
{
    int n, q, ty, i, j, v;
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
            pair<int, int> ans = query(1, 1, n, i + 1, j);
            cout << ans.ft << " " << ans.sd << "\n";
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