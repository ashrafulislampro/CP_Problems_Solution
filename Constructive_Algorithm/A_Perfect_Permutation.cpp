#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    // formula = x + 1;
    for (int i = 2; i <= n; i++)
        cout << i << " ";
    cout << 1 << endl;
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