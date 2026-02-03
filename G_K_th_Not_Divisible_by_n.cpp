#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

ll n, k, ans = -1;
bool isOk(ll mid)
{
    ll idx = mid - mid / n;
    if (idx == k)
        ans = mid;
    if (idx >= k)
        return 1;
    else
        return 0;
}
void solve()
{
    cin >> n >> k;
    ll l = 1, r = 2 * 1e9;
    ans = -1;
    while (r >= l and ans == -1)
    {
        ll mid = l + (r - l) / 2;
        if (isOk(mid))
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
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