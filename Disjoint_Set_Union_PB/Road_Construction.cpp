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
ll comp_cnt, mx_element = 1;
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
            comp_cnt--;
            mx_element = max(mx_element, max(size[a], size[b]));
        }
    }
};

void solve()
{
    ll a, b, c, i, j, k, m, n, q, o, x, y, z;
    cin >> n >> m;

    DSU dsu(n+1);
    comp_cnt = n;
    // for(i = 1; i <= n; i++){
    //     dsu.make_set(i);
    // }

    while(m--){
        cin>>a>>b;
        dsu.union_set(a, b);
        cout<<comp_cnt <<" "<<mx_element<<"\n";
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