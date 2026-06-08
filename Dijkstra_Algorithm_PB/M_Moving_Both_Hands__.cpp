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

ordered_set<int> ost;
void solve()
{
    ll a, b, c, i, m, n;
    cin >> n >> m;
    vector<pair<ll, ll>> adj[2 * n + 1];
    vector<ll> dist(2 * n + 1, inf);

    for (i = 1; i <= m; i++)
    {
        cin >> a >> b >> c;
        adj[a].push_back({c, b});
        adj[n + b].push_back({c, a + n});
    }

    for (i = 1; i <= n; i++)
    {
        adj[i].push_back({0, i + n});
    }
    ll src = 1;
    dist[src] = 0;
    set<pair<ll, ll>> st;
    for (i = 1; i <= (n * 2); i++)
    {
        st.insert({dist[i], i});
    }

    while (st.sz())
    {
        pair<ll, ll> parent = *st.begin();
        st.erase(parent);

        ll dis = parent.ft;
        ll cur_nod = parent.sd;

        for (auto &it : adj[cur_nod])
        {
            ll next_node = it.sd;
            ll edge_weight = it.ft;
            if (dis + edge_weight < dist[next_node])
            {
                st.erase({dist[next_node], next_node});
                dist[next_node] = dis + edge_weight;
                st.insert({dist[next_node], next_node});
            }
        }
    }

    for (i = 2; i <= n; i++)
    {
        ll mn_res = min(dist[i], dist[i + n]);
        if (mn_res == inf)
            cout << -1 << " ";
        else
            cout << mn_res << " ";
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
5 7
1 2 2
2 4 1
4 1 4
2 5 3
5 4 1
5 2 4
2 1 1

Sample Output:
1 -1 3 4

https://codeforces.com/contest/1725/problem/M
*/
