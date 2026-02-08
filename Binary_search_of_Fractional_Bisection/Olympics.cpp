#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
double pi = 1.0 * acos(-1);
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
    int q;
    cin >> q;
    for (int i = 1; i <= q; i++)
    {
        cout << "Case " << i << ": ";
        double a, b;
        char c;
        cin >> a >> c >> b;
        double hi = 200, lo = 0, mid;
        double em = 1e-7;
        while (hi - lo > em)
        {
            mid = lo + (hi - lo) / 2;
            double w = mid * b / a;
            double c = mid / 2;
            double d = w / 2;
            double r = custom_sqrt(c * c + d * d);
            double th = 2.0 * acos(c / r);
            double tmp = mid * 2 + th * r * 2;
            if (tmp < 400.0)
            {
                lo = mid;
            }
            else
            {
                hi = mid;
            }
        }
        double w = lo * b / a;
        cout << fixed << setprecision(8) << lo << " " << w << endl;
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