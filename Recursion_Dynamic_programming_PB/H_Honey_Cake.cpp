#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int w, h, d, n, a, b, c;
    cin >> w >> h >> d >> n;

    a = gcd(n, w);
    b = gcd(n / a, h);
    c = gcd((n / a) / b, d);

    if (a * b * c == n)
    {
        cout << a - 1 << " " << b - 1 << " " << c - 1 << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}