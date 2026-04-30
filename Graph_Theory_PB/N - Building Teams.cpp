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
vector<int> color;
bool flg = true;


// Bipartite graph or Bi-Coloring Problem
void dfs(int src, int curr_grp)
{
    vis[src] = true;
    color[src] = curr_grp;
    for (auto &child : adj_list[src])
    {
        if (color[child] == color[src] and vis[child])
        {
            flg = false;
        }
        else if (!vis[child])
        {
            dfs(child, 3 - curr_grp);
        }
    }
}
void solve()
{
    int node, edge;
    cin >> node >> edge;
    adj_list.resize(node + 1);
    vis.resize(node + 1, false);
    color.resize(node + 1);
    int a, b;
    for (int i = 1; i <= edge; i++)
    {
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    for (int i = 1; i <= node && flg; i++)
    {
        if (!vis[i])
        {
            dfs(i, 1);
        }
    }

    if (!flg)
    {
        cout << "IMPOSSIBLE" << endl;
        return;
    }
    for (int i = 1; i <= node; i++)
    {
        cout << color[i] << " ";
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
5 3
1 2
1 3
4 5

Output:
1 2 2 1 2
This is constructive ans which is base on the programmer thinking.
*/

// https://cses.fi/problemset/task/1668