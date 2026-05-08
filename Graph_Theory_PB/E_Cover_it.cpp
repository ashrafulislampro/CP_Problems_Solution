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

vector<int> dst;
vector<vector<int>> adj_list;
vector<bool> vis;
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    dst[src] = 0;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (auto child : adj_list[node])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                dst[child] = dst[node] + 1;
            }
        }
    }
}
void solve()
{
    int node, edge;
    cin >> node >> edge;
    adj_list.resize(node + 1);
    vis.resize(node + 1, false);
    dst.resize(node + 1, 1e9);
    int a, b;
    for (int i = 1; i <= edge; i++)
    {
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    bfs(1);
    vector<int> even, odd;
    for (int i = 1; i <= node; i++)
    {
        if (dst[i] & 1) // even or odd check
            odd.push_back(i);
        else
            even.push_back(i);
    }

    if ((int)even.size() < (int)odd.size())
    {
        cout << even.size() << endl;
        for (auto val : even)
            cout << val << " ";
    }
    else
    {
        cout << odd.size() << endl;
        for (auto val : odd)
            cout << val << " ";
    }
    cout << endl;

    for (int i = 1; i <= node; i++)
    {
        adj_list[i].clear();
    }
    vis.clear();
    dst.clear();
}
int main()
{
    ASHRAFUL
    int tt;
    cin >> tt;
    while (tt--)
        solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37

/*
Input:
2
4 6
1 2
1 3
1 4
2 3
2 4
3 4
6 8
2 5
5 4
4 3
4 1
1 3
2 3
2 6
5 6

Output:
1
1
3
3 4 6

https://codeforces.com/problemset/problem/1176/E
*/