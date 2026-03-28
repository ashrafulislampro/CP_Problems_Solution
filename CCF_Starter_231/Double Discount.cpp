#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> price(n), testiness(n);
    for (auto &x : price)
        cin >> x;
    for (auto &x : testiness)
        cin >> x;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (price[i] > price[j])
            {
                int a = ((price[i] * 50) / 100) > 100 ? (price[i] - 100) : ((price[i] * 50) / 100);
                int b = price[j];
                if (a + b <= k)
                {
                    ans = max(ans, testiness[i] + testiness[j]);
                }
            }
            else
            {
                int a = ((price[j] * 50) / 100) > 100 ? (price[j] - 100) : ((price[j] * 50) / 100);
                int b = price[i];
                if (a + b <= k)
                {
                    ans = max(ans, testiness[i] + testiness[j]);
                }
            }
        }
    }
    cout << ans << endl;
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