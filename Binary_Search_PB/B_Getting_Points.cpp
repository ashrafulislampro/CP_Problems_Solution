#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    ll n, p, l, t;
    cin >> n >> p >> l >> t;
    ll c = (n + 6) / 7;
    ll lo = 1, hi = 1e9, mid, ans = 0;
    while (hi >= lo)
    {
        mid = lo + (hi - lo) / 2;
        ll value = mid * l + min(c, 2 * mid) * t;
        if (value >= p)
        {
            ans = mid;
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    cout << n - ans << endl;
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