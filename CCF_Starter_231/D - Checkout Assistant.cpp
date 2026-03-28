#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
bool custom_cmp(pair<int, int> &a, pair<int, int> &b)
{
    return a.second < b.second;
}
void solve()
{
    int n, c, t;
    cin >> n;

    vector<pair<int, int>> arr(n);
    ll cost = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> t >> c;
        arr[i] = {t, c};
        cost += (ll)c;
    }
    sort(arr.begin(), arr.end(), custom_cmp);
    vector<ll> dp(n + 1, cost + 1);
    dp[0] = 0;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            int k = min(j + arr[i].first + 1, n);
            dp[k] = min(dp[k], dp[j] + arr[i].second);
        }
    }
    cout << dp[n];
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37