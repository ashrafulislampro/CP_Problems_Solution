#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a)
        cin >> x;

    ll ans = 0;
    for (int bit = 0; bit <= 12; bit++)
    {
        bool one = false, zero = false;
        for (int i = 0; i < n; i++)
        {
            bitset<13> b(a[i]);
            one |= (b[bit] == 1);
            zero |= (b[bit] == 0);
        }

        if (one and zero)
        {
            ans += (1ll << (ll)bit);
        }
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