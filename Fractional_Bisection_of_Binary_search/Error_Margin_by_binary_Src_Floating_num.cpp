#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    double low = 0, high = 16;
    int cnt = 0;
    while (high - low > 0.000001)
    {
        cnt++;
        cout << cnt << " " << low << " " << high << endl;
        double mid = low + (high - low) / 2;
        double tmp = mid * mid + 5 * mid;

        if (tmp < 38.00)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }
    cout << low << endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    // cin >> T;
    while (T--)
        solve();
    return 0;
}