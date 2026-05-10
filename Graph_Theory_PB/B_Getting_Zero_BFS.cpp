#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
#define ft first
#define sd second
#define pb(x) push_back(x);
#define ph(x) push(x);
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

int n, lv_cnt = 0;
void bfs(int src)
{
    vector<int> level(32770, 0);
    vector<int> adj_list[32770];
    vector<bool> vis(32770, false);
    bool flg = true;
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while (!q.empty() && flg)
    {
        int par = q.front();
        q.pop();

        int add_par = par + 1;
        int mul_par = par * 2;
        if (add_par <= 32768)
            adj_list[par].pb(add_par);
        if (mul_par <= 32768)
            adj_list[par].pb(mul_par);

        for (auto child : adj_list[par])
        {
            if (!vis[child])
            {
                q.ph(child);
                level[child] = level[par] + 1;
                vis[child] = true;

                if (child == 32768)
                {
                    flg = false;
                    lv_cnt = level[32768];
                    break;
                }
            }
        }
    }
    cout << lv_cnt << " ";
};
void solve()
{
    cin >> n;
    vector<int> arr(n);
    for (auto &it : arr)
        cin >> it;
    int xyx = 19;
    lv_cnt = 0;
    for (int i = 0; i < n; i++)
        bfs(arr[i]);
    // cout<<lv_cnt<<" ";
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
4
19 32764 10240 49

Output:
14 4 4 15

https://codeforces.com/problemset/problem/1661/B
*/