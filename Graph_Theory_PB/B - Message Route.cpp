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
vector<int> fromWhere;
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        for (auto &child : adj_list[node])
        {
            if (!vis[child])
            {
                fromWhere[child] = node;
                q.push(child);
                vis[child] = true;
            }
        }
    }
}
void solve()
{
    int node, edge;
    cin >> node >> edge;
    adj_list.resize(node + 1);
    vis.resize(node + 1);
    fromWhere.resize(node + 1, -1);
    int a, b;
    for (int i = 1; i <= edge; i++)
    {
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    bfs(1);
    if (!vis[node])
    {
        cout << "IMPOSSIBLE" << endl;
        return;
    }
    vector<int> path;
    /*
        x aschhe y theke
        y aschhe z theke
        z aschhe k theke
        x -> y -> z -> k

    */
    for (int i = node; i != -1; i = fromWhere[i])
    {
        path.push_back(i);
    }

    cout << path.size() << endl;
    reverse(path.begin(), path.end());
    for (auto val : path)
    {
        cout << val << " ";
    }
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
Input:
5 5
1 2
1 3
1 4
2 3
5 4


output:
3
1 4 5

*/

// https://cses.fi/problemset/task/1667