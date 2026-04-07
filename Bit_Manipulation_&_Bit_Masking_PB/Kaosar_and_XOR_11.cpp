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

    if (n <= 2)
    {
        if (n == 1)
            cout << 0 << endl;
        else
            cout << 1 << endl;

        return;
    }
    // bit string
    ll cnt = 64 - __builtin_clzll(n);
    ll mod = 1e9 + 7;
    if (!(n & (n - 1)))
    {
        cout << ((((1ll << cnt) % mod) - 2 + mod) % mod) << endl;
    }
    else
    {
        cout << ((((1ll << cnt) % mod) - 1 + mod) % mod) << endl;
    }
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
// Coded by Ashraful Islam @ml.ashraful37