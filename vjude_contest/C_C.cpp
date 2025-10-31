#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x = 0;
    cin >> n;
    if (n == 0)
    {
        cout << 1 << endl;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            x += 2;
            x++;
        }
        cout << x << endl;
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