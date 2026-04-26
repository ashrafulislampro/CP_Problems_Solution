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
vector<int> color;

bool possible = true;
void dfs(int node, int curr_color)
{
    color[node] = curr_color;
    for (auto &child : adj_list[node])
    {
        if (color[child] != -1)
        {
            if (color[child] == color[node])
            {
                possible = false; // Bi-coloring is not possible!
            }
            else
            {
                continue;
            }
        }
        else
        {
            dfs(child, (curr_color == 1 ? 2 : 1));
        }
    }
}
void solve()
{
    int node, edge;
    cin >> node >> edge;
    adj_list.resize(node + 1);
    color.resize(node + 1, -1);
    int a, b;
    for (int i = 1; i <= edge; i++)
    {
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    for (int i = 1; i <= node; i++)
        if (color[i] == -1)
            dfs(i, 1);

    if (!possible)
    {
        cout << "IMPOSSIBLE" << endl;
        return;
    }

    for (int i = 1; i <= node; i++)
        cout << color[i] << " \n"[i == node];
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
1 3
4 5


Ans: 
1 2 2 1 2


*/