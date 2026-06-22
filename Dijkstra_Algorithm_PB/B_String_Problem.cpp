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

vector<ll> Dijkstra(ll src, ll n, vector<pair<ll, ll>> graph[])
{
    vector<ll> dist(n + 1, inf);
    vector<bool> pros(n + 1);

    dist[src] = 0;
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<>> q;
    q.push({0, src});

    while (q.sz())
    {
        auto [dis, cur_node] = q.top();
        q.pop();
        if (pros[cur_node])
            continue;
        pros[cur_node] = true;

        for (auto &[next_node, edge_weight] : graph[cur_node])
        {
            if (dist[next_node] > dis + edge_weight)
            {
                dist[next_node] = dis + edge_weight;
                q.push({dist[next_node], next_node});
            }
        }
    }
    return dist;
}
void solve()
{
    ll a, b, c, i, j, k, m, n, w;
    string s, t;
    cin >> s >> t >> m;
    vector<pair<ll, ll>> graph[26];
    for (i = 1; i <= m; i++)
    {
        char u, v;
        cin >> u >> v >> w;
        graph[u - 'a'].push_back({v - 'a', w});
    }

    if (s.sz() != t.sz())
    {
        cout << -1 << '\n';
        return;
    }

    vector<vector<ll>> ans;
    for (i = 0; i < 26; i++)
    {
        ans.push_back({Dijkstra(i, 26, graph)}); // ans[2][j]  c-> a +'j' cost
    }

    ll cost = 0;
    string ans_s;
    ll len = s.sz();
    for (i = 0; i < len; i++)
    {
        ll mn = inf;
        char mn_c = 'A';
        for (j = 0; j < 26; j++)
        {
            if (mn > ans[s[i] - 'a'][j] + ans[t[i] - 'a'][j])
            {
                mn = ans[s[i] - 'a'][j] + ans[t[i] - 'a'][j];
                mn_c = 'a' + j;
            }
        }
        if (mn_c == 'A')
        {
            cout << -1 << '\n';
            return;
        }
        cost += mn;
        ans_s += mn_c;
    }
    cout << cost << endl;
    cout << ans_s << endl;
}
int main()
{
    ASHRAFUL
    solve();
    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37

/*
Sample Input:
uayd
uxxd
3
a x 8
x y 13
d c 3


Sample Output:
21
uxyd

https://codeforces.com/problemset/problem/33/B
*/


