#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, mn_op = 0;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    for (int i = 1; i <= n; i++)
    {
        if (v[i] == i)
        {
            mn_op++;
        }
    }
    cout << (mn_op + 1) / 2 << endl;
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