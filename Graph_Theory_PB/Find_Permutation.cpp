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

// find_by_order(x) => return an iterator of k-th smallest element(0-based)
// order_of_key(x) => return a number of element less than x

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

void solve()
{
    int node, edge, a, b;
    cin >> node >> edge;

    vector<int> adj_list[node + 1];
    vector<int> ans, dep(node + 1), perm(node + 1);

    for (int i = 1; i <= edge; i++)
    {
        cin >> a >> b;
        // dep[a];
        dep[b]++;
        adj_list[a].push_back(b);
    }

    // Topological Sort problem
    queue<int> unlocked;
    for (int i = 1; i <= node; i++)
    {
        if (dep[i] == 0)
            unlocked.push(i);
    }

    while (!unlocked.empty())
    {
        if (unlocked.size() > 1)
        {
            cout << "No" << endl;
            return;
        }

        int node = unlocked.front();
        unlocked.pop();
        ans.push_back(node);

        for (auto &child : adj_list[node])
        {
            if (--dep[child] == 0)
            {
                unlocked.push(child);
            }
        }
    }

    if ((int)ans.size() != node)
    {
        cout << "No" << endl;
        return;
    }

    for (int i = 0; i < node; i++)
    {
        perm[ans[i]] = i + 1;
    }
    cout << "Yes" << endl;
    for (int i = 1; i <= node; i++)
    {
        cout << perm[i] << " ";
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
Input:
3 2
3 1
2 3

Output:
Yes
3 1 2

https://atcoder.jp/contests/abc291/tasks/abc291_e
*/