#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int d, x, y, z;
    cin >> d >> x >> y >> z;
    int f_sum = x * 7;
    int s_sum = y * d + z * (7 - d);

    if (f_sum >= s_sum)
        cout << f_sum << endl;
    else
        cout << s_sum << endl;
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