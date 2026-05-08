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
// Detect the farthest Node 
pair<int, int> farthestNode(int src, int parent)
{
    pair<int, int> res = {src, 0};

    for (auto child : adj_list[src])
    {
        if (child != parent)
        {
            auto tmp = farthestNode(child, src);
            tmp.second++;
            if (tmp.second > res.second)
                res = tmp;
        }
    }

    return res;
};
// distance count with dfs
void dfs(int src, int par, int dpt, vector<int> &dst)
{
    dst[src] = dpt;
    for (auto child : adj_list[src])
    {
        if (child != par)
        {
            dfs(child, src, dpt + 1, dst);
        }
    }
}
void solve()
{
    int n, a, b;
    cin >> n;
    adj_list.resize(n + 1);

    for (int i = 1; i < n; i++)
    {
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    auto u = farthestNode(1, -1);
    auto v = farthestNode(u.ft, -1);

    vector<int> u_dist(n + 1), v_dist(n + 1);
    dfs(u.first, -1, 0, u_dist);
    dfs(v.first, -1, 0, v_dist);

    for (int i = 1; i <= n; i++)
    {
        cout << max(u_dist[i], v_dist[i]) << " ";
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
5
1 2
1 3
3 4
3 5

Output:
2 3 2 3 3

https://cses.fi/problemset/task/1132
*/