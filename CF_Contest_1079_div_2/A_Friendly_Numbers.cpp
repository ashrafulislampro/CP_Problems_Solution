#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
int d(int y)
{
    int ans = 0;
    while (y > 0)
    {
        ans += y % 10;
        y /= 10;
    }
    return ans;
}
void solve()
{
    int x;
    cin >> x;

    int cnt = 0;
    for (int y = x; y < x + 100; y++)
    {
        if (y - d(y) == x)
            cnt++;
    }
    cout << cnt << endl;
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