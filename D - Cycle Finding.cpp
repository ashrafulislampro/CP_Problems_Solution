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
    }
};

void solve()
{
    ll a, b, c, i, m, n;
    cin >> n >> m;

    vector<Edge> adj;
    vector<ll> dist(n + 5), prev_node(n + 5), path;
    for (int i = 1; i <= m; i++)
    {
        cin >> a >> b >> c;
        Edge ed(a, b, c);
        adj.pb(ed);
    }

    dist[1] = 0;
    for (i = 2; i <= n; i++)
        dist[i] = inf;

    bool flg = false;
    ll prob_cycle_node = -1;
    for (i = 1; i <= n; i++)
    {
        flg = false;
        prob_cycle_node = -1;
        for (Edge ed : adj)
        {
            ll from = ed.u;
            ll to = ed.v;
            ll cost = ed.w;
            if (dist[to] > dist[from] + cost)
            {
                dist[to] = dist[from] + cost;
                flg = true;
                prev_node[to] = from;
                prob_cycle_node = to;
            }
        }
        if (!flg)
            break;
    }

    if (!flg)
    {
        cout << "NO" << endl;
        return;
    }
    for (i = 1; i <= n; i++)
    {
        prob_cycle_node = prev_node[prob_cycle_node];
    }
    cout << "YES" << endl;
    ll initial_node = prob_cycle_node;
    ll target_node = prev_node[initial_node];
    path.pb(initial_node);
    while (initial_node != target_node)
    {
        path.pb(target_node);
        target_node = prev_node[target_node];
    }
    path.pb(initial_node);
    ll len = path.sz();
    reverse(path.begin(), path.end());
    for (i = 0; i < len; i++)
    {
        cout << path[i] << " \n"[i + 1 == len];
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
4 5
1 2 1
2 4 1
3 1 1
4 1 -3
4 3 -2

Output:
YES
1 2 4 1


*/