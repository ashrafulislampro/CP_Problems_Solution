#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n;
    int taller_b, mx_t_b = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (i == 1)
        {
            taller_b = x;
        }
        if (taller_b < x)
        {
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}