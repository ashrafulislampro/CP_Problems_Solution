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
const ll inf = (ll)1e9;
const ll N = (ll)1e5 + 5;
const ll mod = (ll)1e9 + 7;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

ll tre[4 * N];
ll arr[2 * N];
ll lazyAdd[4 * N];
ll lazySet[4 * N];
bool hasSet[4 * N];

void push(int n, int l, int r)
{
    if (l == r)
    {
        hasSet[n] = false;
        lazyAdd[n] = 0;
        return;
    }

    int mid = (l + r) / 2;

    if (hasSet[n])
    {
        ll v = lazySet[n];

        tre[n * 2] = (mid - l + 1) * v;
        tre[n * 2 + 1] = (r - mid) * v;

        lazySet[n * 2] = v;
        lazySet[n * 2 + 1] = v;

        hasSet[n * 2] = true;
        hasSet[n * 2 + 1] = true;

        lazyAdd[n * 2] = 0;
        lazyAdd[n * 2 + 1] = 0;

        hasSet[n] = false;
    }

    if (lazyAdd[n])
    {
        ll v = lazyAdd[n];

        tre[n * 2] += (mid - l + 1) * v;
        tre[n * 2 + 1] += (r - mid) * v;

        if (hasSet[n * 2])
            lazySet[n * 2] += v;
        else
            lazyAdd[n * 2] += v;

        if (hasSet[n * 2 + 1])
            lazySet[n * 2 + 1] += v;
        else
            lazyAdd[n * 2 + 1] += v;

        lazyAdd[n] = 0;
    }
}

void build(int n, int l, int r)
{
    if (l == r)
    {
        tre[n] = arr[l];
        return;
    }

    int mid = l + (r - l) / 2;
    build(2 * n, l, mid);
    build(2 * n + 1, mid + 1, r);

    tre[n] = tre[2 * n] + tre[2 * n + 1];
}

ll sum(int n,int tl,int tr,int l,int r)
{
    if(l>tr || r<tl)
        return 0;

    if(l<=tl && tr<=r)
        return tre[n];

    push(n,tl,tr);

    int mid=(tl+tr)/2;

    return sum(n*2,tl,mid,l,r)
         + sum(n*2+1,mid+1,tr,l,r);
}

void update(int n,int tl,int tr,int l,int r,ll v)
{
    if(l>tr || r<tl)
        return;

    if(l<=tl && tr<=r)
    {
        tre[n]=1LL*(tr-tl+1)*v;

        hasSet[n]=true;
        lazySet[n]=v;
        lazyAdd[n]=0;

        return;
    }

    push(n,tl,tr);

    int mid=(tl+tr)/2;

    update(n*2,tl,mid,l,r,v);
    update(n*2+1,mid+1,tr,l,r,v);

    tre[n]=tre[n*2]+tre[n*2+1];
}
void increase(int n,int tl,int tr,int l,int r,ll v)
{
    if(l>tr || r<tl)
        return;

    if(l<=tl && tr<=r)
    {
        tre[n]+=1LL*(tr-tl+1)*v;

        if(hasSet[n])
            lazySet[n]+=v;
        else
            lazyAdd[n]+=v;

        return;
    }

    push(n,tl,tr);

    int mid=(tl+tr)/2;

    increase(n*2,tl,mid,l,r,v);
    increase(n*2+1,mid+1,tr,l,r,v);

    tre[n]=tre[n*2]+tre[n*2+1];
}
void solve()
{
    int n, q, ty, l, r;
    ll v;
    cin >> n >> q;

    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    build(1, 1, n);

    while (q--)
    {
        cin >> ty;
        if (ty == 1)
        {
            cin >> l >> r >> v;
            increase(1, 1, n, l, r, v);
        }
        else if (ty == 2)
        {
            cin >> l >> r >> v;
            update(1, 1, n, l, r, v);
        }
        else
        {
            cin >> l >> r;
            cout << sum(1, 1, n, l, r) << "\n";
        }
    }
}
int main()
{
    ASHRAFUL
    solve();
    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37