#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
double custom_sqrt(double n)
{
    double lo = 0, hi = 10000000;
    double mid;
    double em = 1e-7;
    while (hi - lo > em)
    {
        mid = (lo + hi) / 2.0;
        if (mid * mid < n)
        {
            lo = mid;
        }
        else
        {
            hi = mid;
        }
    }
    return lo;
}
void solve()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case " << i << ": ";
        double a, b, c, r;
        cin >> a >> b >> c >> r;
        double s = (a + b + c) / 2;
        double area = custom_sqrt(s * (s - a) * (s - b) * (s - c));
        double lo = 0, hi = a, mid;
        int cnt = 200;
        double em = 1e-7;
        while (hi - lo > em)
        {
            mid = lo + (hi - lo) / 2;
            double k = mid / a;
            double ae = k * c;
            double de = k * b;
            double s2 = (mid + ae + de) / 2;
            double area1 = custom_sqrt(s2 * (s2 - mid) * (s2 - de) * (s2 - ae));
            double area2 = area - area1;
            double tmp = area1 / area2;
            if (tmp < r)
            {
                lo = mid;
            }
            else
            {
                hi = mid;
            }
        }
        cout << fixed << setprecision(9) << lo << endl;
    }
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    solve();
    return 0;
}