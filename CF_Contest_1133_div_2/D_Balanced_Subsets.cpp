#include <bits/stdc++.h>
#define int long long int
using namespace std;

const int MOD = 998244353;
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<bool> a(3 * n + 1);
        int maxx = -1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            maxx = max(maxx, x);
            a[x] = true;
        }
        vector<vector<int>> dp(8, vector<int>(3, 0));
        dp[0][0] = 1;

        for (int i = maxx; i >= 1; i--)
        {
            vector<vector<int>> ndp(8, vector<int>(3, 0));
            for (int j = 0; j < 8; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    if (dp[j][k] == 0)
                        continue;
                    int x = (j << 1) & 7;
                    ndp[x][k] = (ndp[x][k] + dp[j][k]) % MOD;
                    if (a[i] && (k < 2 || __builtin_popcount(j) == 2))
                    {
                        ndp[x | 1][min(2LL, k + 1)] = (ndp[x | 1][min(2LL, k + 1)] + dp[j][k]) % MOD;
                    }
                }
            }
            dp = move(ndp);
        }
        int ans = 0;
        for (int i = 0; i < 8; i++)
        {
            ans = (ans + dp[i][1] + dp[i][2]) % MOD;
        }
        cout << ans << endl;
    }
}
