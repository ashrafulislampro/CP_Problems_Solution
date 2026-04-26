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

// vector<vector<int>> adj_list(20001, vector<int>(20001));
vector<int> adj_list[20001];   // more fast
vector<int> color(20001, -1);

// Maximum Bi_Coloring problem.
void dfs(int node, int curr_color, int &color1, int &color2)
{
    color[node] = curr_color;
    if (curr_color == 1)
        color1++;
    else
        color2++;

    for (auto &child : adj_list[node])
    {
        if (color[child] != -1)
        {
            continue;
        }
        else
        {
            dfs(child, 3 - curr_color, color1, color2);
        }
    }
}
void solve()
{
    int n, u, v;
    cin >> n;
    vector<int> tmp;
    for (int i = 1; i <= n; i++)
    {
        cin >> u >> v;
        tmp.push_back(u), tmp.push_back(v);
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    ll ans = 0;
    for (auto &i : tmp)
    {
        if (color[i] == -1)
        {
            int color1 = 0, color2 = 0;
            dfs(i, 1, color1, color2);
            ans += max(color1, color2);
        }
    }
    cout << ans << endl;
    for (auto &it : tmp)
    {
        adj_list[it].clear();
        color[it] = -1;
    }
}
int main()
{
    ASHRAFUL

    int T = 1;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        cout << "Case " << i << ": ";
        solve();
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37

/*
2
2
1 2
2 3
3
1 2
2 3
4 2


Case 1: 2
Case 2: 3
*/