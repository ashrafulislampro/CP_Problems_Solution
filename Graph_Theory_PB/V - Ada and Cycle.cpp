#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ft first;
#define sd second;
#define pb(x) push_back(x);
#define sz() size();

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

bool flg = true;
int node;
bool cycle_detect(int src, int &ans)
{
    vector<bool> vis(node + 1, false);
    vector<int> usingPath(node + 1, -1);
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (auto &child : adj_list[par])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                usingPath[child] = par;
            }
            else if (src == child)
            {
                vector<int> retrive_path;
                for (int i = par; i != -1; i = usingPath[i])
                    retrive_path.pb(i);
                ans = retrive_path.sz();

                return true;
            }
        }
    }
    return false;
}
void solve()
{
    int x;
    cin >> node;
    adj_list.resize(node + 1);

    for (int i = 1; i <= node; i++)
    {
        for (int j = 1; j <= node; j++)
        {
            cin >> x;
            if (x)
            {
                adj_list[i].push_back(j);
            }
        }
    }

    for (int i = 1; i <= node; i++)
    {
        int ans = 1e9;
        if (cycle_detect(i, ans))
        {
            cout << ans << endl;
        }
        else
        {
            cout << "NO WAY" << endl;
        }
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
5
0 1 1 1 1
1 0 0 0 1
0 0 1 1 0
0 0 1 0 0
0 0 0 1 0

Output:
2
2
1
2
NO WAY


https://www.spoj.com/problems/ADACYCLE/en/
*/