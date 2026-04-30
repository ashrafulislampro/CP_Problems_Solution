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
void dfs(int src)
{
    vis[src] = true;
    for(auto &child: adj_list[src]){
        if(!vis[child]){
            dfs(child);
        }
    }
}
void solve()
{
    int node, edge;
    cin >> node >> edge;
    adj_list.resize(node + 1);
    vis.resize(node + 1, false);

    int u, v;
    for (int i = 1; i <= edge; i++)
    {
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    vector<int> roads;
    for (int i = 1; i <= node; i++)
    {
        if (!vis[i])
        {
            roads.push_back(i);
            dfs(i);
        }
    }
    int len = roads.size();

    cout << len - 1 << endl;
    for (int i = 1; i < len; i++)
    {
        cout << roads[i] << " " << roads[i - 1] << endl;
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
input:
4 2
1 2
3 4

output:
1
3 1
*/

// https://cses.fi/problemset/task/1666