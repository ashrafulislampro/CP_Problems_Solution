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

    ll ans = 1;
    if (k == 1)
    {
        cout << n << endl;
        return;
    }
    ll cnt = 64 - __builtin_clzll(n);
    cout<<((1ll << cnt) - 1)<<endl;
    
    // while (ans < n)
    //     ans = ans * 2 + 1;

    // cout << ans << endl;
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37