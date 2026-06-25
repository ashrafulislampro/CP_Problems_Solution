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

vector<ll> parent;
// DSU structure

struct DSU
{
    vector<ll> size;
    // it's similar to make_set function
    DSU(ll n)
    {
        parent.resize(n + 5);
        iota(parent.begin(), parent.end(), 0);
        size.assign(n + 5, 1);
    }

    void make_set(ll v)
    {
        parent[v] = v;
        size[v] = 1;
    }

    ll find_set(ll v)
    {
        if (v == parent[v])
            return v;
        return parent[v] = find_set(parent[v]);
    }

    void union_set(ll a, ll b)
    {
        a = find_set(a);
        b = find_set(b);

        if (a != b)
        {
            if (size[a] < size[b])
                swap(a, b);
            parent[b] = a;
            size[a] += size[b];
        }
    }
};

void solve()
{
    ll a, b, c, i, j, k, m, n, q, o, x, y, z;
    cin >> n >> q;

    vector<ll> ans(n + 1);
    vector<pair<ll, pll>> queries;

    DSU dsu(n);
    for (i = 1; i <= n; i++)
    {
        dsu.make_set(i);
    }
    for (i = 1; i <= q; i++)
    {
        cin >> a >> b >> c;
        queries.push_back({c, {a, b}});
    }

    for (i = q - 1; i >= 0; i--)
    {
        ll l = queries[i].sd.ft;
        ll r = queries[i].sd.sd;
        ll c = queries[i].ft;

        for (ll v = dsu.find_set(l); v <= r; v = dsu.find_set(v))
        {
            ans[v] = c;
            parent[v] = v + 1;
        }
    }

    // reverse(ans.begin(), ans.end());

    for (ll i = 1; i <= n; i++)
    {
        cout << ans[i] << "\n";
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
4 3
1 3 2
2 4 6
2 3 7

Sample Output:
2
7
7
6

https://www.spoj.com/problems/CLFLARR/
*/