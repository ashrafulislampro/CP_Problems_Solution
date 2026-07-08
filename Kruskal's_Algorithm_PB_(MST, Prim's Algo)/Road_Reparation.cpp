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
const ll N = (ll)2e5 + 5;
const ll mod = (ll)1e9 + 7;
const int MAX_VAL = 100005;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

// DSU structure
vector<int> parent(N), sz_f(N);
struct DSU
{

    void make_set(int v)
    {
        parent[v] = v;
        sz_f[v] = 1;
    }

    int find_set(int v)
    {
        if (v == parent[v])
            return v;
        return parent[v] = find_set(parent[v]);
    }

    void union_set(int a, int b)
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

// city u to v and weight w
vector<pair<ll, pll>> edge_list;

void solve()
{
    int u, v, i, m, n;
    cin >> n >> m;
    ll w;
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
    for (auto &it : edge_list)
    {
        u = it.sd.ft;
        v = it.sd.sd;
        w = it.ft;

        int par_u = dsu.find_set(u);
        int par_v = dsu.find_set(v);

        if (par_v == par_u)
            continue;

        dsu.union_set(u, v);
        mst += w;
    }

    int com_cnt = 0;
    for (i = 1; i < n; i++)
    {
        int par_i = dsu.find_set(i);
        int par_ii = dsu.find_set(i + 1);
        if (par_i != par_ii)
        {
            com_cnt++;
        }
    }
    if (com_cnt > 1)
    {
        cout << "IMPOSSIBLE" << '\n';
        return;
    }

    cout << mst << "\n";
}
int main()
{
    ASHRAFUL
    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37

/*
Sample Input:
5 6
1 2 3
2 3 5
2 4 2
3 4 8
5 1 7
5 4 4

Sample Output:
14

https://cses.fi/problemset/task/1675
*/
