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
const int inf = 1e9;
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

void solve(int node, int edge, int query)
{
    int a, b, c, i, j, k, m, n, o, z;
    vector<Edge> adj;
    for (i = 1; i <= edge; i++)
    {
        cin >> a >> b >> c;
        Edge ed(a, b, c);
        adj.pb(ed);
    }

    for (j = 1; j <= query; j++)
    {
        int x, y;
        cin >> x >> y;

        vector<int> dist(node + 5, inf);
        dist[x] = 0;

        // Bellman Ford
        for (i = 0; i < node - 1; i++)
        {
            bool flg = false;
            for (Edge ed : adj)
            {
                int from = ed.u;
                int to = ed.v;
                int cost = ed.w;
                if (dist[from] == inf)
                    continue;

                if (dist[from] + cost < dist[to])
                {
                    dist[to] = dist[from] + cost;
                    flg = true;
                }
            }
            if (!flg)
                break;
        }

        vector<bool> negative(node + 5, false);
        // negative cycle propagation

        for (Edge &ed : adj)
        {
            int from = ed.u;
            int to = ed.v;
            int cost = ed.w;
            // negative cycle affect
            if (dist[from] == inf)
                continue;

            if (dist[to] > dist[from] + cost)
            {
                dist[to] = dist[from] + cost;
                negative[to] = true;
            }

            // propagation
            if (negative[from])
                negative[to] = true;
        }

        if (dist[y] == inf)
        {
            cout << "Impossible" << endl;
        }
        else if (negative[y])
        {
            cout << "-Infinity" << endl;
        }
        else
        {
            cout << dist[y] << endl;
        }
    }
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int node, edge, query;

    while (cin >> node >> edge >> query)
    {
        if (node == 0 and edge == 0 and query == 0)
            return 0;
        else
        {
            solve(node, edge, query);
            cout << endl;
        }
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37

/*
Input:
4 3 4
0 1 2
1 2 2
3 3 1
0 2
1 2
3 0
3 3
2 1 2
0 1 100
0 1
1 0
0 0 0


Output:

4
2
Impossible
0

100
Impossible


*/