#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    ll n, t;
    cin >> n >> t;
    vector<ll> v(n);
    for (auto &x : v)
        cin >> x;
    sort(v.begin(), v.end());

    ll lo = 1, hi = 1e18, mid, ans = 0;
    while (hi >= lo)
    {
        mid = lo + (hi - lo) / 2;
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            ll rem = mid / v[i];
            cnt += rem;
            if (rem <= 0 or cnt >= t)
                break;
        }
        // cerr << mid << " " << cnt << endl;
        if (cnt < t)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
            ans = mid;
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
    // cin >> T;
    for (int i = 1; i <= T; i++)
    {
        // cout<<"Case #: "<<i<<" ";
        solve();
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37