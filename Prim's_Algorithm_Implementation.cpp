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
#define pll pair<ll, ll>

using ll = long long;
const ll inf = (ll)1e18;
const ll N = (ll)3e5 + 5;
const ll mod = (ll)1e9 + 7;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

// Graph Store into an Adjacency List
vector<pll> adj_list[N];
vector<bool> visited(N, false);
set<pll> st;

void solve()
{
    int u, v, i, j, k, m, n, o, x, y, z;
    cin >> n >> m;
    ll w;
    for (i = 1; i <= m; i++)
    {
        cin >> u >> v >> w;
        adj_list[u].push_back({w, v});
        adj_list[v].push_back({w, u});
    }

    int root = 1;
    ll mst = 0;
    st.insert({0, 1});

    while (st.sz())
    {
        pll par = *st.begin();
        st.erase(par);

        w = par.ft;
        int cur_node = par.sd;

        if (visited[cur_node])
            continue;

        mst += w;
        visited[cur_node] = true;

        // If there is saying to make the tree. We just to store the node 
        // par[v] = u;

        for (auto &it : adj_list[cur_node])
        {
            ll cost = it.ft;
            int to_node = it.sd;

            if (visited[to_node])
                continue;

            st.insert(it);
        }
    }
    cout << mst << "\n";
}
int main()
{
    ASHRAFUL

    int T = 1;
    // cin >> T;
    while (T--)
        solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37