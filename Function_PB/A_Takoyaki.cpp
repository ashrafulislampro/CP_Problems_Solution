#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x, t;
    cin >> n >> x >> t;

    int rem = n / x;
    if (n == rem * x)
    {
        cout << rem * t << endl;
    }
    else
    {
        cout << (rem + 1) * t << endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}