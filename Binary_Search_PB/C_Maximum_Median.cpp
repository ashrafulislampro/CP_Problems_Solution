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
    ll arr[n];
    for (auto &x : arr)
        cin >> x;
    sort(arr, arr + n);

    ll hi = 1e10, lo, ans = arr[n / 2];
    lo = ans + 1;
    while (hi >= lo)
    {
        ll mid = lo + (hi - lo) / 2;
        ll cnt = 0;
        for (int i = n / 2; i < n; i++)
        {
            cnt += mid - min(mid, arr[i]);
        }
        // cerr << cnt << " " << mid << endl;
        if (cnt <= k)
        {
            ans = max(mid, ans);
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
    // cin >> T;
    while (T--)
        solve();
    return 0;
}