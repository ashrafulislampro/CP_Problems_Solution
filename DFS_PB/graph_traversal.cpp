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

ordered_set<int> ost;
vector<vector<int>> arr;
vector<bool> isVisited;
void dfs(int node)
{
    isVisited[node] = true;
    for (auto child : arr[node])
    {
        if (!isVisited[child])
            dfs(child);
    }
}
void solve()
{
    int node, edge;
    cin >> node >> edge;
    arr.resize(node + 1);
    isVisited.resize(node + 1, false);

    for (int i = 1; i <= edge; i++)
    {
        int a, b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    // 5 to 3

    dfs(5);
    for (int i = 1; i <= node; i++)
        cout << isVisited[i] << " ";

    if (isVisited[3])
    {
        cout << "Yes, 5 to 3 traversal is possible!" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37