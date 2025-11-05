#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int c[3], a[5], i;
    for (int i = 0; i < 3; i++)
    {
        cin >> c[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    if (a[0] > c[0] || a[1] > c[1])
    {
        cout << "NO" << endl;
        return;
    }

    c[0] -= a[0];
    c[1] -= a[1];
    if (c[0] < a[3])
        a[3] -= c[0];
    else
        a[3] = 0;

    if (c[1] < a[4])
        a[4] -= c[1];
    else
        a[4] = 0;

    if (c[2] < (a[2] + a[3] + a[4]))
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}