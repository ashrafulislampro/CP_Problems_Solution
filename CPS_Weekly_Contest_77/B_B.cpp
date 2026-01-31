#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int x, y, r;
    cin >> x >> y >> r;
    if (r > 0)
        x += (r / 30);

    int plt = x / y;
    if (plt * y < x)
    {
        cout << plt + 1 << endl;
    }
    else
    {
        cout << plt << endl;
    }
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}