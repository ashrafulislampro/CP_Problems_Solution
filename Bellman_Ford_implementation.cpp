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
const ll inf = (ll)1e9;
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

struct edge
{
    int u, v, w;

    edge(int uu, int vv, int ww)
    {
        u = uu;
        v = vv;
        w = ww;
    };
};

vector<edge> arr;
vector<ll> dist(N), pre_node(N);
vector<ll> path;

void print_path(ll cur)
{
    path.pb(cur);
    if (cur == 1)
        return;
    print_path(pre_node[cur]);
};

void solve()
{
    ll a, b, c, i, j, k, m, n, o, x, y, z;
    cin >> n >> m;

    dist[1] = 0;
    for (ll i = 2; i <= n; i++)
    {
        dist[i] = inf;
    }

    for (int i = 1; i <= m; i++)
    {
        cin >> a >> b >> c;
        edge ed(a, b, c);
        arr.push_back(ed);
    }
    bool flg = false;
    for (ll i = 1; i <= n - 1; i++)
    {
        flg = false;
        for (edge ed : arr)
        {

            ll from = ed.u;
            ll to = ed.v;
            ll cost = ed.w;

            if (dist[to] > dist[from] + cost)
            {
                pre_node[to] = from;
                flg = true;
                dist[to] = dist[from] + cost;
            }
        }
        // optimize the program.
        if (flg == false)
            break;
    }
    print_path(n);

    // path print
    int len = path.sz();
    for (int i = len - 1; i >= 0; i--)
    {
        cout << path[i] << " ";
    }
    cout << endl;

    // 1 to n distance
    cout << dist[n] << endl;

    // Cycle is exist (1) or not (0)
    cout << "Cycle found : " << flg << endl;

    // every node minimum distance
    for (ll i = 1; i <= n; i++)
    {
        cout << dist[i] << " \n"[i == n];
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
5 7
1 2 9
3 4 8
1 3 6
4 5 2
2 5 -8
5 1 6
3 1 -3

Output:
Cycle found : 0
0 9 6 14 1


Input:
3 3
1 2 -2
2 3 -5
3 1 -6

Output:
Cycle found : 1
-26 -15 -20
*/