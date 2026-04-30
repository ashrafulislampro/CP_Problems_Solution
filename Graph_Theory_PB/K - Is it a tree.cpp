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
    int node, edge;
    cin >> node >> edge;
    vector<int> adj_list[node + 1];
    map<int, int> dep;
    vector<int> ans;
    int a, b;
    for (int i = 1; i <= edge; i++)
    {
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
        dep[a];
        dep[b]++;
    }

    queue<int> unlocked;
    for (auto &it : dep)
    {
        if (it.second == 0)
            unlocked.push(it.first);
    }

    while (!unlocked.empty())
    {
        int nod = unlocked.front();
        unlocked.pop();
        ans.push_back(nod);

        for (auto child : adj_list[nod])
        {
            if (--dep[child] == 0)
            {
                unlocked.push(child);
            }
        }
    }

    if ((int)ans.size() != (int)dep.size())
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
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
1 2
2 3

Output:
YES
*/

// https://www.spoj.com/problems/PT07Y/en/