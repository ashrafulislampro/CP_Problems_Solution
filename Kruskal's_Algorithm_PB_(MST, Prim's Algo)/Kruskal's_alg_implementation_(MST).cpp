#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>

using namespace std;
#define ft first
#define sd second
#define pb(x) push_back(x)
#define ph(x) push(x)
#define pp() pop()
#define sz() size()
#define pll pair<ll, ll>

using ll = long long;
const ll inf = (ll)1e18;
const ll N = (ll)3e5 + 5;
const ll mod = (ll)1e9 + 7;
const int MAX_VAL = 100005;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

// DSU structure
vector<ll> parent(N), sz_f(N);
struct DSU
{
    void make_set(ll v)
    {
        parent[v] = v;
        sz_f[v] = 1;
    }

    ll find_set(ll v)
    {
        if (v == parent[v])
            return v;
        return parent[v] = find_set(parent[v]);
    }

    void union_set(ll a, ll b)
    {
        a = find_set(a);
        b = find_set(b);

        if (a != b)
        {
            if (sz_f[a] < sz_f[b])
                swap(a, b);
            parent[b] = a;
            sz_f[a] += sz_f[b];
        }
    }
};

// node 'u' to 'v' and weight 'w'
vector<pair<ll, pll>> edge_list;

void solve(int case_num)
{
    ll a, b, c, i, w, u, v, j, k, m, n, q, o, x, y, z;
    // n => nodes, m => edges
    cin >> n >> m;
    // initialize make_set function
    DSU dsu;
    for (i = 1; i <= n; i++)
    {
        dsu.make_set(i);
    }

    for (i = 1; i <= m; i++)
    {
        cin >> u >> v >> w;
        edge_list.push_back({w, {u, v}});
    }

    sort(edge_list.begin(), edge_list.end());

    ll mst = 0;
    for (auto edge : edge_list)
    {
        // age dekhbo 'u', 'v' already connected kina
        // if not, 'u', 'v' ke connect krbo, 'w' ke mst te add krbo
        // if yes, skip
        w = edge.ft;
        u = edge.sd.ft;
        v = edge.sd.sd;

        ll par_u = dsu.find_set(u);
        ll par_v = dsu.find_set(v);
        if (par_u == par_v)
            continue;

        dsu.union_set(u, v);
        mst += w;
    }

    cout << mst << "\n";
}
int main()
{
    ASHRAFUL
    int t = 1;
    // if (cin >> t)
    // {
    for (int i = 1; i <= t; ++i)
    {
        solve(i);
    }
    // }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37
