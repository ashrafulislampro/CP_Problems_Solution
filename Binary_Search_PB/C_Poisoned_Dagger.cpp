#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    ll n, h;
    cin >> n >> h;
    vector<ll> v(n);
    for (auto &x : v)
        cin >> x;

    ll lo = 1, hi = 2e18, mid, ans;
    while (hi >= lo)
    {
        mid = lo + (hi - lo) / 2;
        ll value = mid;
        for (ll i = 1; i < n; i++)
            value += min(mid, v[i] - v[i - 1]);
        if (value >= h)
            ans = mid, hi = mid - 1;
        else
            lo = mid + 1;
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
    for (int i = 1; i <= T; i++)
    {
        // cout<<"Case #: "<<i<<" ";
        solve();
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37