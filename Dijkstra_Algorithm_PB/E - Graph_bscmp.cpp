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
const double inf = 1e18;
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
    int u, v, w, i, m, n;
    cin >> n >> m;
    vector<pair<double, int>> adj[n + 1];
    vector<double> dist(n + 1, inf);
    vector<bool> pros(n + 1, false);

    for (i = 1; i <= m; i++)
    {
        cin >> u >> v >> w;
        adj[u].push_back({1.0 / w, v});
        adj[v].push_back({1.0 / w, u});
    }

    int src = 1;
    dist[src] = 0;
    priority_queue<pair<double, int>, vector<pair<double, int>>, greater<>> q;
    q.push({0, src});

    while (q.sz())
    {
        pair<double, int> par = q.top();
        q.pop();

        double dis = par.ft;
        int cur_nod = par.sd;
        if (pros[cur_nod])
            continue;
        pros[cur_nod] = true;
        for (auto &it : adj[cur_nod])
        {
            int next_nod = it.sd;
            double edge_weight = it.ft;
            if (dis + edge_weight < dist[next_nod])
            {
                dist[next_nod] = dis + edge_weight;
                q.push({dist[next_nod], next_nod});
            }
        }
    }

    for (i = 2; i <= n; i++)
    {
        cout << fixed << setprecision(8) << dist[i] << '\n';
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
4 4
1 2 1
2 3 2
3 4 4
4 1 3

Sample Output:
1.00000000
0.58333333
0.33333333

https://eolymp.com/en/problems/5471
*/