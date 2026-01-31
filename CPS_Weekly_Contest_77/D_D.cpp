#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n = 9, x;
    int sum_a = 0, sum_b = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum_a += x;
    }
    for (int i = 0; i < n - 1; i++)
    {
        cin >> x;
        sum_b += x;
    }

    cout << (sum_a - sum_b + 1) << endl;
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