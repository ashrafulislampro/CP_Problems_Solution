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
vector<int> dis;
int mx_node = -1, mx_dis = -1;

void dfs(int src, int parent)
{
    if (parent > mx_dis)
    {
        mx_node = src;
        mx_dis = parent;
    }

    vis[src] = true;
    for (auto child : adj_list[src])
    {
        if (!vis[child])
        {
            dfs(child, parent + 1);
        }
    }
}

void solve()
{
    int node;
    cin >> node;
    adj_list.resize(node + 1);
    vis.resize(node + 1, false);
    dis.resize(node + 1, 0);
    int a, b;
    for (int i = 2; i <= node; i++)
    {
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    // dfs
    dfs(1, 0);
    int y = mx_node;
    fill(vis.begin(), vis.end(), false);
    mx_dis = -1, mx_node = -1;
    dfs(y, 0);

    cout << mx_dis << endl;
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
5
1 2
1 3
3 4
3 5

Output:
3
*/

// https://cses.fi/problemset/task/1131