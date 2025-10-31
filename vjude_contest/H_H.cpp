#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, sum = 0, sum2 = 0;
    cin >> n;

    if ((n / 2) % 2 == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        for (int i = 2; i <= n; i += 2)
        {
            sum += i;
            cout << i << " ";
        }
        for (int i = 1; i < n - 1; i += 2)
        {
            sum2 += i;
            cout << i << " ";
        }
        cout << sum - sum2 << endl;
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