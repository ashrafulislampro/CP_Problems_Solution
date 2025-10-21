#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long D;
    cin >> D;
    long long ans = D;

    for (long long x = 0; x * x <= D + 9; x++)
    {
        long long z = D - x * x;
        if (z < 0)
        {
            ans = min(ans, -z);
        }
        else
        {
            long long y1 = sqrt(z);
            long long y2 = y1 + 1;
            ans = min({ans, z - y1 * y1, y2 * y2 - z});
        }
    }

    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    solve();
    return 0;
}