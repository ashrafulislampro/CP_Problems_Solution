#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, total_area = 0;
    cin >> a >> b;

    total_area = min(max(2 * b, a), max(2 * a, b));
    cout << total_area * total_area << endl;
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