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
vector<int> arr;
int ans = 0;
int n, m;
void dfs(int node, int parent, int cat)
{
    if (arr[node])
        cat++;
    else
        cat = 0;

    if (cat > m)
        return;

    bool isLeaf = (node != 1) and (adj_list[node].size() == 1);
    if (isLeaf)
        ans++;

    for (auto child : adj_list[node])
        if (child != parent)
            dfs(child, node, cat);
}
void solve()
{

    cin >> n >> m;
    adj_list.resize(n + 1);
    arr.resize(n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    int a, b;
    for (int i = 2; i <= n; i++)
    {
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    dfs(1, -1, 0);
    cout << ans << endl;
}

int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37