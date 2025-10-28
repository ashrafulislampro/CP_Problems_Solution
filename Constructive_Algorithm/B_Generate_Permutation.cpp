#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = n; i >= 1; i--)
        {
            if (i % 2 == 1)
                cout << i << " ";
        }
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
                cout << i << " ";
        }
        cout << endl;
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