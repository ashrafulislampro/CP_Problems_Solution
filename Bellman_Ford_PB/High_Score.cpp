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

struct Edge
{
    ll u, v, w;
    Edge(ll uu, ll vv, ll ww)
    {
        u = uu;
        v = vv;
        w = ww;
    };
};

void solve()
{
    ll a, b, c, n, m;
    cin >> n >> m;

    vector<Edge> adj;
    vector<ll> dist(n + 5);

    for (int i = 1; i <= m; i++)
    {
        cin >> a >> b >> c;
        Edge ed(a, b, (-1 * c));
        adj.pb(ed);
    }

    for (ll i = 1; i <= n; i++)
        dist[i] = inf;
    dist[1] = 0;

    // Bellman Ford
    for (ll i = 1; i < n; i++)
    {
        for (Edge ed : adj)
        {
            ll from = ed.u;
            ll to = ed.v;
            ll cost = ed.w;
            if (dist[from] == inf)
                continue;
            if (dist[from] + cost < dist[to])
            {
                dist[to] = dist[from] + cost;
            }
        }
    }

    vector<bool> negative(n + 5, false);
    // negative cycle propagation
    for (ll i = 1; i <= n; i++)
    {
        for (Edge ed : adj)
        {
            ll from = ed.u;
            ll to = ed.v;
            ll cost = ed.w;

            if (dist[from] == inf)
                continue;
            // যদি এখনো relax হয়,
            // তাহলে negative cycle affect কর
            if (dist[to] > dist[from] + cost)
            {
                dist[to] = dist[from] + cost;
                negative[to] = true;
            }

            // propagation
            if (negative[from])
            {
                negative[to] = true;
            }
        }
    }

    if (negative[n])
    {
        cout << -1 << endl;
        return;
    }

    cout << (dist[n] * -1) << endl;
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
1 2 3
2 4 -1
1 3 -2
3 4 7
1 4 4

Output:
5

https://cses.fi/problemset/task/1673/
*/