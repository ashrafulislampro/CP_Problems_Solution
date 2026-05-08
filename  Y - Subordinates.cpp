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
vector<int> subtree;

void dfs(int src, int par)
{
    subtree[src] = 1;
    for (auto child : adj_list[src])
    {
        if (child != par)
        {
            dfs(child, src);
            subtree[src] += subtree[child];
        }
    }
}
void solve()
{
    int n, x;
    cin >> n;

    adj_list = vector<vector<int>>(n + 1);
    subtree = vector<int>(n + 1, 0);
    for (int i = 2; i <= n; i++)
    {
        cin >> x;
        adj_list[x].pb(i);
        adj_list[i].pb(x);
    }

    dfs(1, -1);
    for (int i = 1; i <= n; i++)
    {
        cout << subtree[i] - 1 << " \n"[i == n];
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

Input Copy
5
1 1 2 3
Output Copy
4 1 1 0 0

https://cses.fi/problemset/task/1674/
*/