#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
double x, y, c;
double compare_sqrt(double mid)
{
    double h1 = sqrt((x * x) - (mid * mid));
    double h2 = sqrt((y * y) - (mid * mid));

    return ((h1 * h2) / (h1 + h2));
}
void solve()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case " << i << ": ";

        cin >> x >> y >> c;
        double lo = 0.0, hi = min(x, y), mid;
        int cnt = 100;
        while (cnt--)
        {
            mid = (lo + hi) / 2.0;
            cerr << lo << " " << hi << " " << mid << endl;
            if (compare_sqrt(mid) <= c)
            {
                hi = mid;
            }
            else
            {
                lo = mid;
            }
        }
        cout << fixed << setprecision(10) << lo << endl;
    }
}
int main()
{
    ASHRAFUL

    solve();
    return 0;
}