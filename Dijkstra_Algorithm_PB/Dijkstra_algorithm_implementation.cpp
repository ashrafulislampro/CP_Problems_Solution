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
const ll N = (ll)3e5 + 5;
const ll mod = (ll)1e9 + 7;
const ll inf = (ll)1e9;

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

// first -> edge cost
// second -> which node

vector<pair<int, int>> adj[N];
vector<int> dist(N);
void solve()
{
    ll a, b, c, i, j, k, m, n, o, x, y, z;
    cin >> n >> m;

    for (int i = 1; i <= m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({w, v});
        // adj[v].push_back({w, u}) -> if undirected graph
    }

    int source = 1;
    for (int i = 1; i <= n; i++)
    {
        dist[i] = inf;
    }
    dist[source] = 0;
    set<pair<int, int>> st;
    for (int i = 1; i <= n; i++)
    {
        st.insert({dist[i], i});
    }

    // onek node infinite distance niya insert hocche
    // pore jodi node gular distance kome jay, amra oi info erase kre new distance info update kre dibo.

    while (st.sz())
    {
        pair<int, int> par = *st.begin();
        st.erase(par);

        int dis = par.ft;
        int cur_node = par.sd;

        for (auto child : adj[cur_node])
        {
            int nxt_node = child.sd;
            int edge_weight = child.ft;

            if (dis + edge_weight < dist[nxt_node])
            {
                st.erase({dist[nxt_node], nxt_node});
                dist[nxt_node] = dis + edge_weight;
                st.insert({dist[nxt_node], nxt_node});
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << dist[i] << " \n"[i == n];
    }
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37

// Documentation
// https://cp-algorithms.com/graph/dijkstra_sparse.html