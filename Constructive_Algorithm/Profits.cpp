#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;

    if (x > n)
    {
        cout << 0 << endl;
    }
    else
    {
        int cost = x * (n - x + 1);
        int revenue = 0;
        for (int i = n; i >= x; i--)
        {
            revenue += i;
        }
        cout << revenue - cost << endl;
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