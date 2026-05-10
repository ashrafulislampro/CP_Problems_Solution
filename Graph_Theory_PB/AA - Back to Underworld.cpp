#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
#define ft first
#define sd second
#define pb(x) push_back(x)
#define sz() size()

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

void dfs(int src, int curr_color, int &color1, int &color2)
{
    if (curr_color == 1)
        color1++;
    if (curr_color == 2)
        color2++;
    color[src] = curr_color;
    for (auto &child : adj_list[src])
    {
        if (color[child] == -1)
        {
            dfs(child, 3 - curr_color, color1, color2);
        }
    }
}
// Bi-coloring problem
void solve()
{
    int n, u, v;
    cin >> n;
    adj_list.resize(20001);
    color.resize(20001, -1);
    vector<int> tmp;
    for (int i = 1; i <= n; i++)
    {
        cin >> u >> v;
        tmp.pb(u), tmp.pb(v);
        adj_list[u].pb(v);
        adj_list[v].pb(u);
    }
    int ans = 0;
    for (auto &val : tmp)
    {
        if (color[val] == -1)
        {
            int color1 = 0, color2 = 0;
            dfs(val, 1, color1, color2);
            ans += max(color1, color2);
        }
    }
    cout << ans << endl;
    for(auto &it: tmp){
        adj_list[it].clear();
    }
    color.clear();
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
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
Input :
2
2
1 2
2 3
3
1 2
2 3
4 2

Output:
Case 1: 2
Case 2: 3


https://lightoj.com/problem/back-to-underworld
*/