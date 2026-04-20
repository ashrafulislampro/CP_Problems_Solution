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
int mx_depth = -1, depth_node = -1;
void dfs(int src, int parent, int depth)
{
    if (depth > mx_depth)
    {
        mx_depth = depth;
        depth_node = src;
    }
    for (auto child : adj_list[src])
    {
        if (parent != child)
            dfs(child, src, depth + 1);
    }
}
void solve()
{
    int node;
    cin >> node;
    int a, b;
    adj_list.resize(node + 1);
    for (int i = 2; i <= node; i++)
    {
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    dfs(1, -1, 0);
    int y = depth_node;
    mx_depth = -1, depth_node = -1;
    dfs(y, -1, 0);
    cout << mx_depth << endl;
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37