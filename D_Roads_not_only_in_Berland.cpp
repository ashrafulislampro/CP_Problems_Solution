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
struct DSU
{
    vector<ll> parent;
    vector<ll> size;

    // it's similar to make_set function
    DSU(ll n)
    {
        parent.resize(n);
        iota(parent.begin(), parent.end(), 0);
        size.assign(n, 1);
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
    cin >> n;

    DSU dsu(n + 1);
    vector<pair<ll, ll>> close_road, rebuilt_road;
    for (i = 1; i <= n; i++)
    {
        dsu.make_set(i);
    }

    for (i = 1; i < n; i++)
    {
        cin >> a >> b;
        ll root_a = dsu.find_set(a);
        ll root_b = dsu.find_set(b);

        if (root_a == root_b)
        {
            close_road.push_back({a, b});
        }
        else
        {
            dsu.union_set(a, b);
        }
    }
    for (i = 1; i < n; i++)
    {
        ll root_a = dsu.find_set(i);
        ll root_b = dsu.find_set(i+1);

        if (root_a != root_b)
        {
            rebuilt_road.push_back({i, i+1});
            dsu.union_set(i, i+1);
        }       
    }
    ll len = min(close_road.sz(), rebuilt_road.sz());
    cout<<len<<endl;
    for(i = 0; i < len; i++){
        cout<<close_road[i].ft<<" "<<close_road[i].sd<<" "<<rebuilt_road[i].ft<<" "<<rebuilt_road[i].sd<<"\n";
    }
}
int main()
{
    ASHRAFUL
    solve();
    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37
