#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

ll gcd(ll a, ll b)
{
    while (b != 0)
    {
        ll tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}
void solve()
{
    ll n, m, k, lcm;
    cin >> n >> m >> k;

    lcm = (n * m) / gcd(n, m);
    ll l = 0, r = 2e18, mid;
    while (r - l > 1)
    {
        mid = l + (r - l) / 2;
        // isOk function or checker function
        ll x = (mid / n) + (mid / m) - 2 * (mid / lcm);
        if (x >= k)
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }
    cout << r << endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    // cin >> T;
    for (int i = 1; i <= T; i++)
    {
        // cout<<"Case #: "<<i<<" ";
        solve();
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37