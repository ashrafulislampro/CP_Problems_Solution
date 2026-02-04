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
    double x;
    cin >> x;
    int t = 200, cnt = 0;
    while (t--)
    {
        double mid = lo + (hi - lo) / 2;
        cnt++;
        cout << cnt << " " << lo << " " << hi << endl;
        double tmp = mid * mid;
        if (tmp < x)
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