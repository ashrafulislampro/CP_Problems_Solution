#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
vector<int> arr = {1, 5, 10, 25, 50};
// vector<ll> dp(10000, -1);

ll rec_dp(int n)
{
    if (n == 0)
        return 1;
    // if(dp[n] != -1)return dp[n];
    ll ans = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] <= n)
        {
            ans += rec_dp(n - arr[i]);
        }
    }
    return ans;
}
void solve()
{
    int n;
    while (cin >> n)
    {
        // recursize DP
        // cout << rec_dp(n) << endl;

        // Iterative DP
        int sz = arr.size();

        vector<int> dp(n + 1);
        dp[0] = 1;
        for (int i = 0; i < sz; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j - arr[i] >= 0)
                    dp[j] = dp[j] + dp[j - arr[i]];
            }
        }
        cout << dp[n] << endl;


        // 2D iterative but it is not working...
        // vector<vector<int>> dp(sz, vector<int>(n + 1));
        // int dp[sz][n + 1] = {0};
        // cerr << dp.size();
        // for (int i = 0; i < sz; i++)
        //     dp[i][0] = 1;

        // for (int i = 0; i < sz; i++)
        // {
        //     for (int j = 1; j <= n; j++)
        //     {
        //         if (arr[i] > j and i > 0)
        //         {
        //              dp[i][j] = dp[i - 1][j];
        //         }
        //         else if (i > 0 and j - arr[i] >= 0)
        //         {
        //             dp[i][j] = dp[i - 1][j] + dp[i][j - arr[i]];
        //         }
        //     }
        // }

        // for (int i = 0; i < sz; i++)
        // {
        //     for (int j = 0; j <= n; j++)
        //     {

        //         cout << dp[i][j] << " ";
        //     }
        //     cout << endl;
        // }
    };
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37