#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long

void solve()
{
    int a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;
    ll ans = 1e18;
    for (int i = 0; i < 2; i++)
    {
        int da = min(n, a - x);
        int db = min(n - da, b - y);        
        ans = min(ans, (a - da) * 1ll * (b - db));
        swap(a, b);
        swap(x, y);
    }
    cout << ans << endl;
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}