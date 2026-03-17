#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    ll a, b, c, m;
    cin >> a >> b >> c >> m;

    ll A = m / a, B = m / b, C = m / c;
    ll AB = m / lcm(a, b), BC = m / lcm(b, c), CA = m / lcm(c, a);

    ll ABC = m / lcm(a, lcm(b, c));
    AB -= ABC, BC -= ABC, CA -= ABC;

    A -= (AB + CA + ABC), B -= (AB + BC + ABC), C -= (CA + BC + ABC);

    cout << A * 6 + (AB + CA) * 3 + ABC * 2 << " ";
    cout << B * 6 + (BC + AB) * 3 + ABC * 2 << " ";
    cout << C * 6 + (CA + BC) * 3 + ABC * 2 << endl;
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