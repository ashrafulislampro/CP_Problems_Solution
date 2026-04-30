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
vector<int> dist_from_s, dist_from_d;

void BFS(int src, vector<int> &dis)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    dis[src] = 0;
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
                dis[child] = dis[node] + 1;
            }
        }
    }
}

int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {

        int n, r, u, v, s, d;
        cin >> n >> r;

        adj_list.resize(n + 1);
        vis.resize(n + 1, false);
        dist_from_s.resize(n + 1, 0);
        dist_from_d.resize(n + 1, 0);
        for (int j = 1; j <= r; j++)
        {
            cin >> u >> v;
            adj_list[u].push_back(v);
            adj_list[v].push_back(u);
        }
        cin >> s >> d;

        // BFS
        BFS(s, dist_from_s);
        fill(vis.begin(), vis.end(), false);
        BFS(d, dist_from_d);

        int ans = 0;
        for (int j = 0; j < n; j++)
            ans = max(ans, dist_from_d[j] + dist_from_s[j]);

        cout << "Case " << i << ": " << ans << endl;

        for (int i = 0; i < n; i++)
        {
            adj_list[i].clear();
        }
        dist_from_s.clear();
        dist_from_d.clear();
        vis.clear();
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37



/*
input:
2
4
3
0 1
2 1
1 3
0 3
2
1
0 1
1 0

output:
Case 1: 4
Case 2: 1

*/

// https://lightoj.com/problem/commandos