#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n, x, b = 0;
    cin >> n;
    int z = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        b += x;
        if (x == 0)
            z++;
        }
    cout << min(b - n + 1, n - z) << endl;
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