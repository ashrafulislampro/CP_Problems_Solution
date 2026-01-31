#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    vector<ll> pre(n + 1), suf(n + 1);
    for (int i = 1; i <= n; i++)
        pre[i] = __gcd(pre[i - 1], v[i]);

    suf[n] = v[n];
    for (int i = n - 1; i >= 1; i--)
        suf[i] = __gcd(suf[i + 1], v[i]);

    ll ans = max(suf[2], pre[n - 1]);

    for (int i = 1; i + 1 <= n; i++)
    {
        ans = max(ans, __gcd(pre[i - 1], suf[i + 1]));
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
// @ml.ashraful37