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

void solve()
{
    map<string, vector<string>> adj_list;
    map<string, int> dep;
    queue<string> unlocaked;
    vector<string> ans;

    int n;
    cin >> n;
    string u, v;
    for (int i = 1; i <= n; i++)
    {
        cin >> u >> v;
        adj_list[u].push_back(v);
        dep[u];
        dep[v]++;
    }

    for (auto &it : dep)
    {
        if (it.second == 0)
            unlocaked.push(it.first);
    }

    // BFS
    while (!unlocaked.empty())
    {
        string node = unlocaked.front();
        unlocaked.pop();
        ans.push_back(node);

        for (auto &child : adj_list[node])
        {
            if (--dep[child] == 0)
                unlocaked.push(child);
        }
    }

    if ((int)ans.size() != (int)dep.size())
    {
        cout << "No" << endl;
        return;
    }

    cout << "Yes" << endl;
}
int main()
{
    ASHRAFUL
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case " << i << ": ";
        solve();
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37

/*
Test Case:
2
2
soda wine
water wine
3
soda wine
water wine
wine water

Output:
Case 1: Yes
Case 2: No

*/