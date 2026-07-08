#include <bits/stdc++.h>
using namespace std;
int n;
int a[200200];
void solve()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int f = 0, s = 0, mn = 1e9;
    for (int i = 0; i < n - 1; i++)
    {
        s += (a[i] == 3 ? -1 : 1);
        if (s >= mn)
        {
            cout << "YES\n";
            return;
        }
        f += (a[i] == 1 ? 1 : -1);
        if (f >= 0)
            mn = min(mn, s);
    }
    cout << "NO\n";
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}