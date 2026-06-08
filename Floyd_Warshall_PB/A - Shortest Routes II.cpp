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
const ll inf = (ll)1e18;
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

void solve()
{
    ll i, j, k, m, n, q, u, v, w;
    cin >> n >> m >> q;

    ll dist[n + 1][n + 1];
    // initialization
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            dist[i][j] = inf;
        }
    }
    // same node
    for (i = 1; i <= n; i++)
        dist[i][i] = 0;

    // input data
    for (j = 1; j <= m; j++)
    {
        cin >> u >> v >> w;
        dist[u][v] = min(dist[u][v], w);
        dist[v][u] = min(dist[v][u], w);
    }

    // floyd warshall algorithm
    for (k = 1; k <= n; k++)
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    // output print
    for (i = 1; i <= q; i++)
    {
        cin >> u >> v;
        if (dist[u][v] == inf)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << dist[u][v] << endl;
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

/*
Input:
4 3 5
1 2 5
1 3 9
2 3 3
1 2
2 1
1 3
1 4
3 2


Output:
5
5
8
-1
3

https://cses.fi/problemset/task/1672/
*/