#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>

using namespace std;
#define ft first
#define sd second
#define pb(x) push_back(x)
#define ph(x) push(x)
#define pp() pop()
#define sz() size()
#define pll pair<int, int>

using ll = long long;
const ll inf = (ll)1e18;
const ll N = (ll)3e5 + 5;
const ll mod = (ll)1e9 + 7;
const int MAX_VAL = 100005;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

// DSU structure
vector<ll> parent(N), sz_f(N);
struct DSU
{

    void make_set(ll v)
    {
        parent[v] = v;
        sz_f[v] = 1;
    }

    ll find_set(ll v)
    {
        if (v == parent[v])
            return v;
        return parent[v] = find_set(parent[v]);
    }

    bool union_set(ll a, ll b)
    {
        a = find_set(a);
        b = find_set(b);

        if (a != b)
        {
            if (sz_f[a] < sz_f[b])
                swap(a, b);
            parent[b] = a;
            sz_f[a] += sz_f[b];
            return true;
        }
        return false;
    }
};
// Function to find the max edge weight between source and target in the MST
ll query_max_edge(int n, int src, int target, vector<vector<pair<ll, int>>> &adj)
{
    vector<ll> max_edge(n + 5, -1);
    queue<int> q;

    q.push(src);
    max_edge[src] = 0;

    while (q.sz())
    {
        int cur_node = q.front();
        q.pop();

        if (cur_node == target)
            return max_edge[target];
        for (auto &it : adj[cur_node])
        {
            int next_nod = it.sd;
            ll edge_weight = it.ft;
            if (max_edge[next_nod] == -1)
            { // if not visited
                max_edge[next_nod] = max(max_edge[cur_node], edge_weight);
                q.push(next_nod);
            }
        }
    }
    return -1;
}
void solve(int case_num)
{
    int a, b, c, i, j, k, m, n, q, o, x, y, z;
    cin >> n >> m;
    ll w;
    DSU dsu;
    for (i = 1; i <= n; i++)
    {
        dsu.make_set(i);
    }
    vector<pair<ll, pll>> edge_list;
    // original graph edge_list
    for (i = 1; i <= m; i++)
    {
        cin >> a >> b >> w;
        edge_list.push_back({w, {a, b}});
    }

    sort(edge_list.begin(), edge_list.end());
    int edge_cnt = 0;

    // MST making graph adj;
    vector<vector<pair<ll, int>>> adj(n + 5);
    for (i = 0; i < m and edge_cnt < n - 1; i++)
    {
        int u = edge_list[i].sd.ft;
        int v = edge_list[i].sd.sd;
        ll weight = edge_list[i].ft;
        if (dsu.union_set(u, v))
        {
            adj[u].push_back({weight, v});
            adj[v].push_back({weight, u});
            edge_cnt++;
        }
    }

    cout << "Case " << case_num << "\n";
    cin >> q;
    while (q--)
    {
        cin >> x >> y;
        cout << query_max_edge(n, x, y, adj) << "\n";
    }
    cout << "\n";
}
int main()
{
    ASHRAFUL
    int t = 1;
    if (cin >> t)
    {
        for (int i = 1; i <= t; ++i)
        {
            solve(i);
        }
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37

/*
Sample Input
2
4 4
1 2 100
2 3 100
3 4 100
4 1 200
1
1 4
6 9
2 4 5
5 1 7
3 6 6
3 1 4
2 3 2
1 2 1
6 5 42
4 5 3
4 6 5
4
1 3
3 4
5 4
6 1

Sample Output
Case 1
100
Case 2
2
5
3
5

https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3328
*/