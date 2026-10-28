#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int x, y, z;
    cin >> x >> y >> z;
    int total = 0;
    if (x >= z)
    {
        total += z;
        total += y / 2;
    }
    else
    {
        total += x;
        z -= x;

        if (y >= z)
        {
            y -= z;
            total += (y / 2 + z);
        }
        else
        {
            z -= y;
            total += z/2+y;
        }
    }
    cout << total << endl;
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