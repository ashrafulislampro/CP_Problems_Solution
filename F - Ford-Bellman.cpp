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

using ll = long long;
const int inf = 30000;
const ll N = (ll)3e5 + 5;
const ll mod = (ll)1e9 + 7;

// Ordered Set Declaration
template <typename T>
using ordered_set = tree<
    T,
    null_type,
    less<T>,
    rb_tree_tag,
    tree_order_statistics_node_update>;

// find_by_order(x) => return an iterator of k-th smallest element(0-based)
// order_of_key(x) => return a number of element less than x

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

struct Edge
{
    int u, v, w;
    Edge(int uu, int vv, int ww)
    {
        u = uu;
        v = vv;
        w = ww;
    }
};
void solve()
{
    int a, b, c, i, j, k, m, n, o, x, y, z;
    cin >> n >> m;
    vector<Edge> adj;
    vector<int> dist(n + 5);
    for (i = 1; i <= m; i++)
    {
        cin >> a >> b >> c;
        Edge ed(a, b, c);
        adj.pb(ed);
    }

    dist[1] = 0;
    for (i = 2; i <= n; i++)
        dist[i] = inf;

    // bellman ford
    for (i = 1; i < n; i++)
    {
        for (Edge ed : adj)
        {
            int from = ed.u;
            int to = ed.v;
            int cost = ed.w;
            if (dist[from] == inf)
                continue;
            if (dist[to] > dist[from] + cost)
            {
                dist[to] = dist[from] + cost;
            }
        }
    }

    for (i = 1; i <= n; i++)
        cout << dist[i] << " \n"[i == n];
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37

/*
Input:
4 5
1 2 10
2 3 10
1 3 100
3 1 -10
2 3 1


Output:
0 10 11 30000



*/