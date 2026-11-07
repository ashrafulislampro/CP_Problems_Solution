#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, k, x, y;
    cin >> n >> m >> k;
    cin >> x >> y;
    int pr = (x + y) % 2, ok = 0;

    for (int i = 1; i <= k; i++)
    {
        cin >> x >> y;

        if ((x + y) % 2 == pr)
        {
            ok = 1;
        }
    }

    if (ok)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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