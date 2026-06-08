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
    ll a, b, c, i, j, k, m, n, o, x, y, z;
    cin >> n >> m;
    vector<pair<ll, ll>> adj[n + 1];
    vector<ll> dist(n + 1);

    for (i = 1; i <= m; i++)
    {
        cin >> a >> b >> c;
        adj[a].push_back({c, b});
    }

    ll src = 1;
    for (i = 1; i <= n; i++)
    {
        dist[i] = inf;
    }
    dist[src] = 0;

    set<pair<ll, ll>> st;
    for (i = 1; i <= n; i++)
    {
        st.insert({dist[i], i});
    }

    while (st.size())
    {
        pair<ll, ll> parent = *st.begin();
        st.erase(parent);

        ll dis = parent.ft;
        ll cur_nod = parent.sd;

        for (auto &it : adj[cur_nod])
        {
            ll next_nod = it.sd;
            ll edge_weight = it.ft;

            if (dis + edge_weight < dist[next_nod])
            {
                st.erase({dist[next_nod], next_nod});
                dist[next_nod] = dis + edge_weight;
                st.insert({dist[next_nod], next_nod});
            }
        }
    }

    for (i = 1; i <= n; i++)
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

/*
Sample Input:
3 4
1 2 6
1 3 2
3 2 3
1 3 4

Sample Output:
0 5 2

https://cses.fi/problemset/task/1671/
*/