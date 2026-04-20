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

vector<vector<ll>> arr;
vector<ll> ans;
ll dfs(ll node, ll parent)
{
    ll elements = 1;
    
    for (auto child : arr[node])
    {
        if (parent != child)
        {
           
            elements += dfs(child, node);
        }
    }
    ans[node] = elements - 1;

    return elements;
}

void solve()
{
    int node;
    cin >> node;
    arr.resize(node + 1);
    ans.resize(node + 1);
    for (ll i = 2; i <= node; i++)
    {
        ll parent;
        cin >> parent;
        arr[parent].push_back(i);
    }
    dfs(1, -1);

    for (ll i = 1; i <= node; i++)
        cout << ans[i] << " \n"[i == node];
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37