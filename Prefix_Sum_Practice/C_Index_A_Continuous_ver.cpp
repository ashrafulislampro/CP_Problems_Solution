#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<ll> a(n + 1), b;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    b = a;
   
    for (int i = 1; i <= n; i++)
        b[i] *= i;

    for (int i = 1; i <= n; i++)
    {
        a[i] += a[i - 1];
        b[i] += b[i - 1];
    }

    ll ans = LLONG_MIN;
    for (int i = 1; i + m - 1 <= n; i++)
    {
        ans = max(ans, ((b[i + m - 1] - b[i - 1]) - ((a[i + m - 1] - a[i - 1]) * (i - 1))));
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