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
    for (int i = 0; i < 32; i += 2)
    {
        int a = (n >> i) & 1;
        int b = (n >> (i + 1)) & 1;
        swap(a, b);
        if (a)
        {
            ans += 1 << i;
        }

        if (b)
        {
            ans += 1 << (i + 1);
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