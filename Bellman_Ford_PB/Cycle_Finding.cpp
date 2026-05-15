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

using ll = long long;
const ll inf = (ll)1e18;
const ll N = (ll)2500 + 5;
const ll mod = (ll)1e9 + 7;

// Ordered Set Declaration
template <typename T>
using ordered_set = tree<
    T,
    null_type,
    less<T>,
    rb_tree_tag,
    tree_order_statistics_node_update>;

// find_by_order(x) => return an iterator of k-th smallest element(0-based)
// order_of_key(x) => return a number of element less than x

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

// Bellman Ford => cycle detection problem

void solve()
{
    ll a, b, c, m, n;
    cin >> n >> m;
    vector<pair<ll, pair<ll, ll>>> adj;
    vector<ll> dist(n + 5), pre_node(n + 5), path;
    ll root_n;
    for (int i = 1; i <= m; i++)
    {
        cin >> a >> b >> c;
        if (i == 1)
        {
            root_n = a;
        }
        adj.push_back({c, {a, b}});
    }

    for (ll i = 1; i <= n; i++)
        dist[i] = inf;

    dist[root_n] = 0;

    bool flg = false;
    ll prob_cycle_node = -1;
    for (int i = 1; i <= n; i++)
    {
        flg = false;
        prob_cycle_node = -1;
        for (auto &it : adj)
        {
            ll from = it.sd.ft;
            ll to = it.sd.sd;
            ll cost = it.first;
            if (dist[to] > dist[from] + cost)
            {
                dist[to] = dist[from] + cost;
                pre_node[to] = from;
                flg = true;
                prob_cycle_node = to;
            }
        }
        if (flg == false)
            break;
    }
    if (!flg)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    for (int i = 1; i <= n; i++)
    {
        prob_cycle_node = pre_node[prob_cycle_node];
    }

    ll initial_node = prob_cycle_node;
    ll tar = pre_node[initial_node];
    path.pb(initial_node);

    while (tar != initial_node)
    {
        path.pb(tar);
        tar = pre_node[tar];
    }

    path.pb(initial_node);
    ll len = path.sz();
    for (ll i = len - 1; i >= 0; i--)
    {
        cout << path[i] << " ";
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
4 5
1 2 1
2 4 1
3 1 1
4 1 -3
4 3 -2

Output:
YES
4 1 2 4

https://cses.fi/problemset/task/1197
*/