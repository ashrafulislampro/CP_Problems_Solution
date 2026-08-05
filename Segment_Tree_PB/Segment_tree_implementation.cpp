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
#define pll pair<ll, ll>
template <typename T>
using vec = vector<T>;

using ll = long long;
const ll inf = (ll)1e18;
const ll N = (ll)1e5 + 5;
const ll mod = (ll)1e9 + 7;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

ll t[4 * N];

// build a segment tree from an array 'a'
void build(vector<ll> a, int v, int tl, int tr)
{
    if (tl == tr)
    {
        t[v] = a[tl];
    }
    else
    {
        int tm = (tl + tr) / 2;
        build(a, v * 2, tl, tm);
        build(a, v * 2 + 1, tm + 1, tr);
        t[v] = t[v * 2] + t[v * 2 + 1];
    }
}

// Sum function
ll sum(int v, int tl, int tr, int l, int r)
{
    if (l > r)
        return 0;

    if (l == tl and r == tr)
        return t[v];

    int tm = (tl + tr) / 2;

    return sum(v * 2, tl, tm, l, min(r, tm)) + sum(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r);
}

// update the existing value;
void update(int v, int tl, int tr, int pos, int new_val)
{
    if (tr == tl)
    {
        t[v] = new_val;
    }
    else
    {
        int tm = (tl + tr) / 2;

        if (pos <= tm)
        {
            update(v * 2, tl, tm, pos, new_val);
        }
        else
        {
            update(v * 2 + 1, tm + 1, tr, pos, new_val);
        }

        t[v] = t[v * 2] + t[v * 2 + 1];
    }
}
void solve()
{
    ll val, ty, q;
    int n, idx, l, r;
    cin >> n>>q;
    vector<ll> arr(n+1);
    for(int i = 1; i <= n; i++)cin>>arr[i];

    build(arr, 1, 1, n);

    while(q--){
        cin>>ty;
        if(ty == 1){
            cin>>idx>>val;
            update(1, 1, n,idx+1, val);
        }else{
            cin>>l>>r;
            cout<<sum(1, 1, n, l+1, r) <<"\n";
        }
    }
}
int main()
{
    ASHRAFUL

    int T = 1;
    // cin >> T;
    while (T--)
        solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37