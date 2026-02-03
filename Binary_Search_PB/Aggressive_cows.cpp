#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

vector<ll> v;

bool isOk(ll mid, ll c)
{
    ll cnt = 1;
    int sz = v.size();
    for (int i = 1, j = 0; i < sz; i++)
    {
        ll val = v[i] - v[j];
        if (val >= mid)
        {
            cnt++;
            j = i;
        }
    }
    if (cnt >= c)
    {
        return true;
    }
    return false;
}
void solve()
{
    ll n, c;
    cin >> n >> c;
    v.resize(n);
    ll l = LLONG_MAX, r = LLONG_MIN;
    for (auto &x : v)
    {
        cin >> x;
        if (x > r)
            r = x;
        if (x < l)
            l = x;
    }
   
    sort(v.begin(), v.end());
    ll ans = LLONG_MIN;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (isOk(mid, c))
        {
            l = mid + 1;
            ans = mid;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}