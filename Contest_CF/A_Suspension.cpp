#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, y, r;
    cin >> n >> y >> r;

    int val = max(r, r + y / 2);
    cout << (val > n ? n : val) << endl;
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