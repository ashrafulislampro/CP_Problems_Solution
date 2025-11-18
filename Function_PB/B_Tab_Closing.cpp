#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, n, cnt = 0;
    cin >> a >> b >> n;

    cout << (a == b || (long long)b * n <= a ? "1" : "2") << endl;
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