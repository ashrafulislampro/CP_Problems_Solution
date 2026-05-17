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

using ll = long long;
const ll inf = (ll)1e18;
const ll N = (ll)3e5 + 5;
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

struct Edge
{
    ll u, v, w;
    Edge(ll uu, ll vv, ll ww)
    {
        u = uu;
        v = vv;
        w = ww;
    }
};


// Multi source shortest path. 
// the program is not working onto time limit 3-second;
void solve()
{
    ll a, b, c, i, j, k, m, n;
    cin >> n >> m;
    vector<Edge> adj;
    
    for (int i = 1; i <= m; i++)
    {
        cin >> a >> b >> c;
        Edge ed(a, b, c);
        adj.pb(ed);
    }
    ll mn_val = 0;
    for (k = 1; k <= n; k++)
    {

        vector<ll> dist(n + 5, inf);

        dist[k] = 0;
        bool flg = false;

        for (i = 1; i <= n; i++)
        {

            flg = false;
            ll tmp_val = 0, j = 0;
            for (Edge ed : adj)
            {

                ll from = ed.u;
                ll to = ed.v;
                ll cost = ed.w;

                if (dist[to] > dist[from] + cost)
                {
                    tmp_val += cost;
                    mn_val = min(tmp_val, mn_val);
                    dist[to] = dist[from] + cost;
                    flg = true;
                }
            }

            if (!flg)
                break;
        }

        if (flg)
        {
            cout << "-inf" << endl;
            return;
        }
    }

    cout << mn_val << endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    while (T--)
        solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37

/*
Input:
3
3 3
1 2 -1
2 3 -3
3 1 -5
4 5
1 3 0
1 2 -2
2 3 3
3 4 1
4 1 -1
4 4
1 2 5
2 3 -3
3 4 -3
1 4 2

Output:
-inf
-3
-6

https://codeforces.com/gym/101498/problem/L
*/