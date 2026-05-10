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

vector<pair<ll, ll>> adj[N];
vector<ll> dist(N);

// Solid Dijkstra Algorithm
// Shortest route lenth from 1 to n
void solve()
{
    ll a, b, c, i, j, k, m, n, o, x, y, z;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> a >> b >> c;
        adj[a].push_back({c, b});
    }

    ll src = 1;
    for (ll i = 1; i <= n; i++)
    {
        dist[i] = inf;
    }
    dist[src] = 0;

    set<pair<ll, ll>> st;
    for (ll i = 1; i <= n; i++)
    {
        st.insert({dist[i], i});
    }

    while (st.sz())
    {
        pair<ll, ll> par = *st.begin();
        st.erase(par);

        ll dis = par.ft;
        ll cur_node = par.sd;

        for (auto &it : adj[cur_node])
        {
            ll next_node = it.sd;
            ll edge_weight = it.ft;
            if (edge_weight + dis < dist[next_node])
            {
                st.erase({dist[next_node], next_node});
                dist[next_node] = dis + edge_weight;
                st.insert({dist[next_node], next_node});
            }
        }
    }
    for (ll i = 1; i <= n; i++)
    {
        cout << dist[i] << " ";
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
3 4
1 2 6
1 3 2
3 2 3
1 3 4

Output:
0 5 2

https://cses.fi/problemset/task/1671/
*/