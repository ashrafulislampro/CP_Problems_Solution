#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int n, m, x;
    cin >> n >> m;
    ll ts_sum = 0, te_sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        ts_sum += x;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        te_sum += x;
    }

    if (ts_sum > te_sum)
    {
        cout << "Tsondu" << endl;
    }
    else if (te_sum > ts_sum)
    {
        cout << "Tenzing" << endl;
    }
    else
    {
        cout << "Draw" << endl;
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