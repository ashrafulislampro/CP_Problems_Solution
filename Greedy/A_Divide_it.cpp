#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, ans = 0;
    cin >> n;
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            ans++;
            n /= 2;
        }
        else if ((n * 2) % 3 == 0)
        {
            n = (n * 2) / 3;
            ans++;
        }
        else if ((n * 4) % 5 == 0)
        {
            n = (n * 4) / 5;
            ans++;
        }
        else
        {
            cout << -1 << endl;
            return;
        }
    }
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