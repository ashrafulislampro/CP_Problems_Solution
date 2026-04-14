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

    ll ans = 1, base = 2, mod = 1e9 + 7;
    while (n)
    {
        if (n & 1)
            ans = (ans * base) % mod;
        base = (base * base) % mod;
        n >>= 1;
    }

    cout << ans << endl;
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37