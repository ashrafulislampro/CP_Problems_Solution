#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y, k;
    cin >> x >> y >> k;

    if (x > y)
    {
        cout << x << endl;
    }
    else if (x + k < y)
    {
        cout << (y - (x + k)) * 2 + (x + k) << endl;
    }
    else
    {
        cout << (y - x) + x << endl;
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