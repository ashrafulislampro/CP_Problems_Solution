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
vector<int> dep, ans;
queue<int> unlocaked;
void BFS()
{
    while (!unlocaked.empty())
    {
        int node = unlocaked.front();
        unlocaked.pop();
        ans.push_back(node);

        for (auto &child : adj_list[node])
        {
            if (--dep[child] == 0)
                unlocaked.push(child);
        }
    }
}
void solve()
{
    int node, edge;
    cin >> node >> edge;
    adj_list.resize(node + 1);
    dep.resize(node + 1, 0);
    int u, v;
    for (int i = 1; i <= edge; i++)
    {
        cin >> u >> v;
        adj_list[u].push_back(v);
        dep[v]++;
    }

    for (int i = 1; i <= node; i++)
    {
        if (dep[i] == 0)
            unlocaked.push(i);
    }

    BFS();
    if ((int)ans.size() != node)
    {
        cout << "IMPOSSIBLE" << endl;
        return;
    }
    for (auto &it : ans)
        cout << it << " ";
    cout << endl;
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37

/*
Test Case:
5 3
1 2
3 1
4 5

Output:
3 4 1 5 2

*/