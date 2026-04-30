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
vector<int> arr, ans;
vector<bool> vis;
vector<vector<int>> adj_list;

void solve()
{
    int n;
    cin >> n;
    arr.resize(n + 1);
    vis.resize(n + 1, false);
    ans.resize(n + 1, -1);
    adj_list.resize(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    //
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        int left = i - arr[i], right = i + arr[i];
        bool pushed = false;
        if (left >= 1)
        {
            if ((arr[i] & 1) != (arr[left] & 1))
            {
                q.push(i);
                pushed = true;
                ans[i] = 1;
                vis[i] = true;
            }
            else
            {
                // 4 to 6    i to left
                // consider  left to i
                adj_list[left].push_back(i);
            }
        }
        if (right <= n)
        {
            if ((arr[i] & 1) != (arr[right] & 1))
            {
                if (!pushed)
                {
                    q.push(i);
                    ans[i] = 1;
                    vis[i] = true;
                }
            }
            else
            {
                adj_list[right].push_back(i);
            }
        }
    }

    // BFS
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (auto &from : adj_list[node])
        {
            // from_node => node, distance[from_node] = distance[node]+1;

            if (!vis[from])
            {
                vis[from] = true;
                q.push(from);
                ans[from] = ans[node] + 1;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " \n"[i == n];
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
input:
10
4 5 7 6 7 5 4 4 6 4

output:
1 1 1 2 -1 1 1 3 1 1

*/

// https://codeforces.com/contest/1272/problem/E