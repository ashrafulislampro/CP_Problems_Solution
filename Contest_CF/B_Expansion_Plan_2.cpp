#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    ll n, x, y, c8 = 0, y_cover;
    cin >> n >> x >> y;
    x = abs(x), y = abs(y);

    string str;
    cin >> str;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '8')
            c8++;
    }
    y_cover = min(n, n - x + c8);
    if (x <= n && y <= y_cover)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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