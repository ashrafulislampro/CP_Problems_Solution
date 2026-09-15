#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;

    if (k > n || x < k - 1)
    {
        cout << -1 << endl;
        return;
    }

    if (k == x)
        x--;

    int ans = (k * (k - 1)) / 2;
    ans += ((n - k) * x);
    cout << ans << endl;
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