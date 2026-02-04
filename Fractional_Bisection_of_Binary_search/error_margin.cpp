#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    double hi = 1000000000, lo = 0;
    int t = 200, cnt = 0;
    while (t--)
    {
        cnt++;
        cout << cnt << " " << lo << " " << hi << endl;
        double mid = lo + (hi - lo) / 2;
        double tmp = mid * mid + 5 * mid;
        if (tmp < 38.0)
        {
            lo = mid;
        }
        else
        {
            hi = mid;
        }
    }
    cout << lo << endl;
}
int main()
{
    ASHRAFUL

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int T = 1;
    // cin >> T;
    while (T--)
        solve();
    return 0;
}