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

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

ll par[N], sz_f[N];
void make_set(int v)
{
    par[v] = v;
    sz_f[v] = 1;
}
ll find_set(ll v)
{
    if (v == par[v])
        return v;
    return par[v] = find_set(par[v]);
}

void union_set(ll a, ll b)
{
    a = find_set(a);
    b = find_set(b);

    if (a == b)
        return;

    if (a < b)
    {
        swap(a, b);
    }
    par[b] = a;
    sz_f[a] += sz_f[b];
}
void solve()
{
    ll a, b, c, i, j, k, m, n, o, x, y, z;
    cin >> n >> m >> k;
    for (i = 1; i <= n; i++)
    {
        make_set(i);
    }

    for (i = 1; i <= m; i++)
    {
        cin >> a >> b;
    }
    vector<pair<ll, pll>> qr;
    vector<string> ans;
    for (i = 1; i <= k; i++)
    {
        string ss;
        cin >> ss >> a >> b;
        ll ty = 1;
        if (ss == "cut")
            ty = 2;
        qr.push_back({ty, {a, b}});
    }

    for (i = k - 1; i >= 0; i--)
    {

        if (qr[i].ft == 1)
        {

            if (find_set(qr[i].sd.ft) == find_set(qr[i].sd.sd))
            {
                ans.pb("YES");
            }
            else
            {
                ans.pb("NO");
            }
        }
        else
        {
            union_set(qr[i].sd.ft, qr[i].sd.sd);
        }
    }
    reverse(ans.begin(), ans.end());
    for (auto it : ans)
    {
        cout << it << endl;
    }
}
int main()
{
    ASHRAFUL
    solve();
    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37