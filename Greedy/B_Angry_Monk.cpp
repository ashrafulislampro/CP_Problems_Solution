#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, mx = INT_MIN, x;
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> x;
        if (x > mx)
            mx = x;
    }
    // cout
    cout << ((2 * (n - mx)) - k + 1) << endl;
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