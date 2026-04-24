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
vector<bool> isVisited;
vector<int> dist;

void BFS()
{
    queue<pair<int, int>> q;
    q.push({1, 0});
    while (!q.empty())
    {
        int node = q.front().first;
        int curr_dis = q.front().second;

        q.pop();
        if (isVisited[node])
            continue;
        isVisited[node] = true;
        dist[node] = curr_dis;
        for (auto child : adj_list[node])
        {
            if (!isVisited[child])
                q.push({child, curr_dis + 1});
        }
    }
}
void solve()
{
    int node, edge;
    cin >> node >> edge;
    adj_list.resize(node + 1);
    isVisited.resize(node + 1, false);
    dist.resize(node + 1);

    for (int i = 1; i <= edge; i++)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    BFS();

    // 1 to 6 distance
    cout << dist[6] << endl;

    // For each node distance
    // for (int i = 1; i <= node; i++)
    // {
    //     cout << i << " " << dist[i] << endl;
    // }
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

6 6
1 2
1 4
1 6
2 3
3 5
5 6

*/