#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
#define ft first
#define sd second

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
vector<int> color;
// Bi-Coloring Problem.
bool flg = true;
void dfs(int src, int cur_color)
{
    vis[src] = true;
    color[src] = cur_color;
    for (auto &child : adj_list[src])
    {
        if (color[child] == color[src] and vis[src])
        {
            flg = false;
            return;
        }
        if (!vis[child])
        {
            dfs(child, 3 - cur_color);
        }
    }
}
void solve()
{
    int node, edge;
    cin >> node >> edge;
    adj_list.resize(node + 1);
    color.resize(node + 1, -1);
    vis.resize(node + 1, false);
    int a, b;
    for (int i = 1; i <= edge; i++)
    {
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    for (int i = 1; i <= node && flg; i++)
        if (!vis[i])
            dfs(i, 1);

    if (!flg)
    {
        cout << "Suspicious bugs found!" << endl;
    }
    else
    {
        cout << "No suspicious bugs found!" << endl;
    }
    flg = true;
    for (int i = 1; i <= node; i++)
    {
        adj_list[i].clear();
    }
    color.clear();
    vis.clear();
}
int main()
{
    ASHRAFUL

    int T = 1;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        cout << "Scenario #" << i << ": " << endl;
        solve();
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37

/*
Input:
2
3 3
1 2
2 3
1 3
4 2
1 2
3 4

Output:

Scenario #1:
Suspicious bugs found!
Scenario #2:
No suspicious bugs found!


https://www.spoj.com/problems/BUGLIFE/en/
*/