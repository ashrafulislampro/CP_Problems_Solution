#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    vector<ll> v(n);
    ll total = 0;
    for (auto &ele : v)
    {
        cin >> ele;
        total += ele / x;
    }

    ll ans = 0, mx = 0;
    for (int i = 0; i < n; i++)
    {
        mx = (total - v[i] / x) * y + v[i];

        ans = max(ans, mx);
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
