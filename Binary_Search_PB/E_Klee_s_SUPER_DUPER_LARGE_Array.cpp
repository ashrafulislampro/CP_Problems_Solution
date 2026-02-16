#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    ll n, k;
    cin >> n >> k;

    ll lo = 1, hi = n, mid, ans = LLONG_MAX;
    while (hi >= lo)
    {
        mid = lo + (hi - lo) / 2;
        ll pos = ((k + k + mid - 1) * mid / 2);
        ll neg = ((k + mid + k + n - 1) * (n - mid) / 2);

        ans = min(ans, abs(pos - neg));
        if (neg > pos)
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

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}