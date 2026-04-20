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
int n;

void dfs(int curr_node, int kar_theke_aschi, vector<vector<int>> graph)
{
    cout << curr_node << " ";
    for (int conn = 1; conn <= n; conn++)
    {
        if (graph[curr_node][conn] == 1)
            if (conn != kar_theke_aschi)
                dfs(conn, curr_node, graph);
    }
}
void solve()
{

    cin >> n;
    vector<vector<int>> graph(n + 1, vector<int>(n + 1, 0));
    for (int i = 1; i <= n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    dfs(1, -1, graph);
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    // cin >> T;
    while (T--)
        solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37