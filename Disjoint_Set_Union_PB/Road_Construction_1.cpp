#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>

using namespace std;
#define ft first
#define sd second
#define pb(x) push_back(x)
#define ph(x) push(x)
#define pp() pop()
#define sz() size()
#define pll pair<ll, ll>

using ll = long long;
const ll inf = (ll)1e18;
const ll N = (ll)3e5 + 5;
const ll mod = (ll)1e9 + 7;
const int MAX_VAL = 100005;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

// DSU structure
vector<int> parent(N), sz_f(N);
int mx_sz = 1, comp_cnt;
struct DSU
{
    void make_set(int v)
    {
        parent[v] = v;
        sz_f[v] = 1;
    }

    int find_set(int v)
    {
        if (v == parent[v])
            return v;
        return parent[v] = find_set(parent[v]);
    }

    void union_set(int aa, int bb)
    {
        int a = find_set(aa);
        int b = find_set(bb);

        if (a != b)
        {
            if (sz_f[a] < sz_f[b])
                swap(a, b);
            parent[b] = a;
            sz_f[a] += sz_f[b];
            mx_sz = max(mx_sz, sz_f[a]);
            comp_cnt--;
        }
    }
};

void solve()
{
    int i, m, n, u, v;
    cin >> n >> m;
    comp_cnt = n;
    DSU dsu;
    for (i = 1; i <= n; i++)
    {
        dsu.make_set(i);
    }

    while (m--)
    {
        cin >> u >> v;
        dsu.union_set(u, v);
        cout << comp_cnt << " " << mx_sz << "\n";
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
Sample Input:
5 3
1 2
1 3
4 5

Sample Output:
4 2
3 3
2 3

https://cses.fi/problemset/task/1676/
*/
