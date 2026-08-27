#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define db long double
#define vii vector<ll>
#define pll pair<ll, ll>
#define F first
#define S second

const ll N = (ll)3e5 + 5;
const ll mod = (ll)1e9 + 7;
const ll inf = (ll)1e18;

vector<ll> tree[4 * N];

ll ar[N];

// a, b ke merge kore c te rakhbo
void merge(vii &a, vii &b, vii &c)
{
    c.clear();
    int i = 0, j = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] <= b[j])
        {
            c.push_back(a[i++]);
        }
        else
        {
            c.push_back(b[j++]);
        }
    }
    while (i < a.size())
    {
        c.push_back(a[i++]);
    }
    while (j < b.size())
    {
        c.push_back(b[j++]);
    }
}

// 1st test case clear er complexity O(n)

void build(ll n, ll l, ll r)
{
    if (l == r)
    {
        tree[n].clear();
        tree[n].push_back(ar[r]);
        return;
    }
    ll mid = (l + r) / 2;
    build(2 * n, l, mid);
    build(2 * n + 1, mid + 1, r);

    merge(tree[2 * n], tree[2 * n + 1], tree[n]);

    // cout << n << " " << l << " " << r << " " << tree[n].size() << "\n";
    // for(ll ii : tree[n]) {
    //     cout << ii << " ";
    // }
    // cout << "\n\n";
}

ll query(ll n, ll l, ll r, ll i, ll j, ll x)
{
    // cerr << n << " " << i << " " << r << " " << j << " " << l << " " << "\n";
    if (i > r || j < l)
    {
        return 0;
    }
    if (l >= i && r <= j)
    {

        // cout << l << " " << r << " ";

        ll lo = 0, hi = (int)tree[n].size() - 1;
        ll ans = 0;

        // if( l == 4 && r == 5) {
        //     cerr << n << "\n";
        //     for(ll ii : tree[n]) {
        //         cerr << ii << " ";

        //     }
        //     cerr << "\n";
        // }
        while (lo <= hi)
        {
            ll mid = (lo + hi) / 2;
            if (tree[n][mid] <= x)
            {
                ans = mid + 1;
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }
        // cout << ans << "\n";
        return ans;
    }

    ll mid = (l + r) / 2;
    return query(2 * n, l, mid, i, j, x) + query(2 * n + 1, mid + 1, r, i, j, x);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        ll a, b, c, i, j, k, m, n, o, y, z;
        cin >> n;
        for (i = 1; i <= n; i++)
        {
            cin >> ar[i];
        }

        build(1, 1, n);

        ll q;
        cin >> q;
        while (q--)
        {
            ll l, r, x;
            cin >> l >> r >> x;
            cout << query(1, 1, n, l, r, x) << "\n";
        }
    }
}