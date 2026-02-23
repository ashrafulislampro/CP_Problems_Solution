#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    ll n;
    cin >> n;
    ll l = 0, r = min<ll>(2 * n, 2e9), mid;
    while (r - l > 1)
    {
        mid = l + (r - l) / 2; // (l+r)>>1 same equation
        // m = x + y, ans = x + 2 * y
        if (mid * (mid - 1) / 2 + mid < n)
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    ll y = n - r * (r - 1) / 2;
    if ((r + 1) * r / 2 <= n)
    {
        cout << min(r + y, r + 1 + n - (r + 1) * r / 2) << endl;
    }
    else
    {
        cout << r + y << endl;
    }
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