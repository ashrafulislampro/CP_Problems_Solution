#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    unsigned int n;
    cin >> n;
    unsigned int ans = 0;
    for (int i = 0; i < 32; i++)
    {
        int bit = (n >> i) & 1;
        if (bit)
        {
            ans += 1 << (31 - i);
        }
    }
    cout << ans << " ";
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
// Coded by Ashraful Islam @ml.ashraful37