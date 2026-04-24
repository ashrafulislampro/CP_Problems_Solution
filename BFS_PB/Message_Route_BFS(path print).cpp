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
vector<bool> isEvenInQ;
vector<int> fromWhere, path;

void BFS(int src)
{
    queue<int> q;
    q.push(src);
    isEvenInQ[src] = true;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        for (auto child : adj_list[node])
        {
            if (!isEvenInQ[child])
            {
                fromWhere[child] = node;
                q.push(child);
                isEvenInQ[child] = true;
            }
        }
    }
}
void solve()
{
    int node, edge;
    cin >> node >> edge;
    adj_list.resize(node + 1);
    fromWhere.resize(node + 1, -1);
    isEvenInQ.resize(node + 1, false);
    int a, b;
    for (int i = 1; i <= edge; i++)
    {
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    BFS(1);

    // n aschhe x theke
    // x aschhe y theke
    // y aschhe z theke
    // z aschhe 1 theke
    // 1 -> z -> y -> x -> n
    if (!isEvenInQ[node])
    {
        cout << "IMPOSSIBLE" << endl;
        return;
    }
    for (int i = node; i != -1; i = fromWhere[i])
    {
        path.push_back(i);
    }

    // print path reverse wise.
    cout << path.size() << endl;
    for (int i = path.size() - 1; i >= 0; i--)
    {
        cout << path[i] << " \n"[i == 0];
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
Test Case:
5 5
1 2
1 3
1 4
2 3
5 4

Ans:
3
1 4 5

*/