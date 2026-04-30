#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

// Ordered Set Declaration
template <typename T>
using ordered_set = tree<
    T,
    null_type,
    less<T>,
    rb_tree_tag,
    tree_order_statistics_node_update>;
using ll = long long;

// find_by_order(x) => return an iterator of k-th smallest element(0-based)
// order_of_key(x) => return a number of element less than x

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

vector<vector<int>> adj_list;
vector<bool> vis;

// Breath-Fast-Search
int BFS(int src)
{
    int cities = 1;
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (auto &child : adj_list[node])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                cities++;
            }
        }
    }
    return cities;
};
int main()
{
    ASHRAFUL

    int T = 1;
    cin >> T;
    for (int tt = 1; tt <= T; tt++)
    {
        cout << "Case " << tt << ": ";

        int k, n, m, u, v;
        cin >> k >> n >> m;
        adj_list.resize(m + 1);
        vis.resize(n + 1, false);
        vector<int> arr(k);
        for (auto &it : arr)
            cin >> it;
        for (int i = 1; i <= m; i++)
        {
            cin >> u >> v;
            adj_list[u].push_back(v);
        }

        int mx_cities = 1e9;
        for (int i = 0; i < k; i++)
        {
            int res = BFS(arr[i]);
            fill(vis.begin(), vis.end(), false);
            mx_cities = min(mx_cities, res);
        }
        cout << mx_cities << endl;

        for (int i = 1; i <= n; i++)
        {
            adj_list[i].clear();
        }
        vis.clear();
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37


/*
input:
1
2 4 4
2
3
1 2
1 4
2 3
3 4

output:
Case 1: 2

*/

// https://lightoj.com/problem/best-picnic-ever