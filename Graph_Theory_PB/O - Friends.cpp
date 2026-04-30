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
int mx_citizen_grp = 0;

void dfs(int src)
{
    mx_citizen_grp++;
    vis[src] = true;
    for (auto &child : adj_list[src])
    {
        if (!vis[child])
        {
            dfs(child);
        }
    }
};

void solve()
{
    int node, edge;
    cin >> node >> edge;
    adj_list.resize(node + 1);
    vis.resize(node + 1, false);
    int a, b;
    for (int i = 1; i <= edge; i++)
    {
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    int ans = 0;
    for (int i = 1; i <= node; i++)
    {
        if (!vis[i])
        {
            mx_citizen_grp = 0;
            dfs(i);
            ans = max(ans, mx_citizen_grp);
        }
    }
    cout << ans << endl;
    for (int i = 1; i <= node; i++)
        adj_list[i].clear();
    vis.clear();
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    while (T--)
        solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37

/*
Input:
2
3 2
1 2
2 3
10 12
1 2
3 1
3 4
5 4
3 5
4 6
5 2
2 1
7 1
1 2
9 10
8 9

Output:
3
7

*/

// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1549