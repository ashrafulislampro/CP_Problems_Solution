#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
#define ft first
#define sd second

// Ordered Set Declaration
template <typename T>
using ordered_set = tree<
    T,
    null_type,
    less<T>,
    rb_tree_tag,
    tree_order_statistics_node_update>;
using ll = long long;

const int MOD = 1e9 + 7;
// find_by_order(x) => return an iterator of k-th smallest element(0-based)
// order_of_key(x) => return a number of element less than x

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

void solve()
{
    int node, edge, a, b;
    cin >> node >> edge;

    vector<int> adj_list[node + 1], invEdge[node + 1], dp(node + 1, 0), dep(node + 1, 0);
    dp[1] = 1;
    for (int i = 1; i <= edge; i++)
    {
        cin >> a >> b;
        adj_list[a].push_back(b);
        invEdge[b].push_back(a);
        dep[b]++;
    }

    queue<int> unlocked;
    for (int i = 1; i <= node; i++)
    {
        if (dep[i] == 0)
            unlocked.push(i);
    }

    while (!unlocked.empty())
    {
        int x = unlocked.front();
        unlocked.pop();

        for (auto child : adj_list[x])
        {
            if (--dep[child] == 0)
            {
                unlocked.push(child);
            }
        }
        for (auto &par : invEdge[x])
        {
            dp[x] = (dp[x] + dp[par]) % MOD;
        }
    }

    cout << dp[node] << endl;
}

int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37

/*
Input:
4 5
1 2
2 4
1 3
3 4
1 4

Output:
3

https://cses.fi/problemset/task/1681
*/