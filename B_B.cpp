#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    ll x, y, z;
    cin >> x >> y >> z;

    ll a = x * y;
    if (a % z == 0)
    {
        cout << a << " " << z << endl;
        return;
    }

    ll b = x * z;
    if (b % y == 0)
    {
        cout << b << " " << y << endl;
        return;
    }
    ll c = y * z;
    if (c % x == 0)
    {
        cout << c << " " << x << endl;
        return;
    }

    cout << -1 << endl;
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