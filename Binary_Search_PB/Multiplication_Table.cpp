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
    ll middle = n * n / 2 + 1;
    ll lo = 1, hi = n * n, mid, ans;
    while (hi >= lo)
    {
        mid = lo + (hi - lo) / 2;
        ll l = 0, r = 0;
        for (int i = 1; i <= n; i++)
        {
            l += min((mid - 1) / i, n);
            r += min(mid / i, n);
        }
        if (middle > l and middle <= r)
        {
            ans = mid;
            break;
        }
        else if (r < middle)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    cout << ans << endl;
}
int main()
{
    ASHRAFUL

    solve();
    return 0;
}