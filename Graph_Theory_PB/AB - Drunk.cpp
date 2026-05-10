#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
#define ft first
#define sd second
#define pb(x) push_back(x)
#define ph(x) push(x)
#define pp() pop()
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

void solve()
{
    int n;
    cin >> n;
    string a, b;
    map<string, vector<string>> adj_list;
    map<string, int> dep;
    vector<string> ans;
    queue<string> unlocked;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b;
        dep[a];
        dep[b]++;
        adj_list[a].pb(b);
    }

    for (auto &it : dep)
    {
        if (it.second == 0)
            unlocked.ph(it.first);
    }

    // topological sort or kahn's algorithm
    while (!unlocked.empty())
    {
        string node = unlocked.front();
        unlocked.pp();
        ans.pb(node);

        for (auto &child : adj_list[node])
        {
            if (--dep[child] == 0)
            {
                unlocked.ph(child);
            }
        }
    }

    if ((int)ans.sz() != (int)dep.sz())
    {
        cout << "No" << endl;
        return;
    }
    cout << "Yes" << endl;
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
Input:
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

https://lightoj.com/problem/drunk
*/