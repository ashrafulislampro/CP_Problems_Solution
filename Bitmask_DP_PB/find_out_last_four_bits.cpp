#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n;
    cin >> n;
    int bit3, bit2, bit1, bit0;
    bit0 = n & 1;
    n = n >> 1; // n /= 2;
    bit1 = n & 1;
    n = n >> 1; // n /= 2;
    bit2 = n & 1;
    n = n >> 1; // n /= 2;
    bit3 = n & 1;

    cout << bit3 << bit2 << bit1 << bit0 << endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    // cin >> T;
    for (int i = 1; i <= T; i++)
    {
        // cout<<"Case #: "<<i<<" ";
        solve();
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37