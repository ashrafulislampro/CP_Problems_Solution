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
const ll mod = (ll)1e9 + 7;

// Ordered Set Declaration
template <typename T>
using ordered_set = tree<
    T,
    null_type,
    less<T>,
    rb_tree_tag,
    tree_order_statistics_node_update>;

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
    ll n, m;
    cin >> n >> m;

    vector<Edge> adj;

    for (ll i = 1; i <= m; i++)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        // Maximum path বের করার জন্য negate করা হচ্ছে
        adj.pb(Edge(a, b, -c));
    }

    vector<ll> dist(n + 5, inf);

    dist[1] = 0;

    // Bellman Ford
    for (ll i = 1; i <= n - 1; i++)
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
    // Negative cycle propagation
    
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
            // তাহলে negative cycle affect করছে
            if (dist[from] + cost < dist[to])
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

    // যদি destination negative cycle দ্বারা affected হয়
    if (negative[n])
    {
        cout << "inf" << '\n';
        return;
    }

    cout << -dist[n] << '\n';
}

int main()
{
    ASHRAFUL

    solve();

    return 0;
}

/*

Input:
3 3
1 2 4
2 3 3
1 3 5

Output:
7

*/