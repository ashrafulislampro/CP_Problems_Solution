#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
#define ft first
#define sd second
#define pb(x) push_back(x)
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
    ll a, b;
    cin >> a >> b;
    map<ll, vector<ll>> adj_list;
    map<ll, bool> vis;
    map<ll, ll> usingPath;

    // bfs
    queue<ll> q;
    q.push(a);
    vis[a] = false;
    usingPath[a] = -1;
    bool flg = true;
    while (!q.empty() && flg)
    {
        ll par = q.front();
        q.pop();

        ll mul = par * 2;
        ll add_digit = par * 10 + 1;

        if (mul <= 1e9)
            adj_list[par].pb(mul);
        if (add_digit <= 1e9)
            adj_list[par].pb(add_digit);

        for (auto &child : adj_list[par])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                usingPath[child] = par;
                if (child == b)
                {
                    flg = false;
                    break;
                }
            }
        }
    }

    if (flg)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    vector<ll> path;
    for (ll i = b; i != -1; i = usingPath[i])
    {
        path.pb(i);
    }
    int len = path.size();
    cout << len << endl;
    for (int i = len - 1; i >= 0; i--)
    {
        cout << path[i] << " ";
    }
    cout << endl;
}
int main()
{
    ASHRAFUL
    solve();
    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37