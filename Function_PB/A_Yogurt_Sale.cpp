#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, a, b, sum = 0;
    cin >> n >> a >> b;

    if (b < a * 2)
    {
        int rem = n % 2;
        sum = b * (n / 2);
        sum += rem * a;
        cout << sum << endl;
    }
    else
    {
        cout << n * a << endl;
    }
}
int main()
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