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

void solve()
{
    int node, edge;
    cin >> node >> edge;

    set<pair<int, int>> adj_list[node + 1];
    while (edge--)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        adj_list[u].insert({v, wt});
        adj_list[v].insert({u, wt});
    }

    for (int i = 1; i <= node; i++)
    {
        cout << i << ": ";
        for (auto it : adj_list[i])
            cout << "[" << it.first << ", " << it.second << "] ";
        cout << endl;
    }

    auto it = adj_list[2].lower_bound({5, -1});
    cout << it->first << endl;
    if (it == adj_list[2].end() || it->first != 5)
    {
        cout << "No";
    }
    else
    {
        cout << "Yes";
    }
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37