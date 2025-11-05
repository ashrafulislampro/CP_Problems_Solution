#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int w, p, k;
    cin >> w >> p >> k;

    if (w > k)
    {
        cout << k * 2 << endl;
    }
    else
    {
        int ans = 0;
        k -= w;
        ans += w * 2;
        if (p > k)
        {
            ans += k;
        }
        else
        {
            ans += p;
        }
        cout << ans << endl;
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