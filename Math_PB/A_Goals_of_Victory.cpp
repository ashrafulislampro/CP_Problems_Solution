#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, sum = 0, x;
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        cin >> x;
        sum += x;
    }
    cout << sum * -1 << endl;
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