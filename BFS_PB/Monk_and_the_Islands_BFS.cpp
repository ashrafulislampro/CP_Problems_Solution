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

void BFS(vector<vector<int>> &adj_list, vector<bool> &vis, vector<int> &dist)
{
    queue<pair<int, int>> q;
    q.push({1, 0});
    while (!q.empty())
    {
        int node = q.front().first;
        int curr_dis = q.front().second;
        q.pop();

        if (vis[node])
            continue;
        vis[node] = true;
        dist[node] = curr_dis;
        for (auto child : adj_list[node])
        {
            if (!vis[child])
                q.push({child, curr_dis + 1});
        }
    }
}
void solve()
{
    int node, edge;
    cin >> node >> edge;
    vector<vector<int>> adj_list(node + 1);
    vector<bool> vis(node + 1, false);
    vector<int> dist(node + 1);

    int a, b;
    for (int i = 1; i <= edge; i++)
    {
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    BFS(adj_list, vis, dist);
    // 1 to N distance
    cout << dist[node] << endl;
}
int main()
{
    ASHRAFUL
    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37

/*
Test Case:
2
3 2
1 2
2 3

4 4
1 2
2 3
3 4
4 2

Ans:
   2
   2
*/