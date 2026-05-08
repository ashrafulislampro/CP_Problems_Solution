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

vector<vector<int>> adj_list;
vector<bool> vis;
vector<int> arr;
int mx_dept = 0;
void dfs(int src, int dpt)
{
    mx_dept = max(mx_dept, dpt);
    // cerr << src << " = " << dpt << endl;
    vis[src] = true;
    for (auto child : adj_list[src])
    {
        if (!vis[child])
        {
            dfs(child, dpt + 1);
        }
    }
}

void solve()
{
    int node;
    cin >> node;
    adj_list.resize(node + 1);
    vis.resize(node + 1, false);
    arr.resize(node + 1);
    int a;
    for (int i = 1; i <= node; i++)
    {
        cin >> a;
        arr[i] = a;
        if (a == -1)
        {
            adj_list[a + 1].push_back(i);
            // adj_list[i].push_back(a + 1);
        }
        else
        {
            adj_list[a].push_back(i);
            // adj_list[i].push_back(a);
        }
    }
    for (int i = 1; i <= node; i++)
    {
        if (arr[i] == -1)
            dfs(i, 1);
    }

    cout << mx_dept << endl;
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
-1
1
2
1
-1


Output:
3

Input:
12
-1
1
2
3
-1
5
6
7
-1
9
10
11

Output:
4
*/

// https://codeforces.com/problemset/problem/115/A