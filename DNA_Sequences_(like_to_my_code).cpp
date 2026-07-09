#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    while (cin >> k && k)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int n = s1.size();
        int m = s2.size();

        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        vector<vector<int>> cnt(n + 1, vector<int>(m + 1, 0));
        vector<vector<int>> opt(n + 1, vector<int>(m + 1, 0));

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                // match na dhorei standard LCS transition
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);

                if (s1[i - 1] == s2[j - 1])
                {
                    cnt[i][j] = cnt[i - 1][j - 1] + 1;

                    if (cnt[i][j] >= k)
                    {
                        // cnt[i][j] >= k mane i>=k, j>=k, tai i-k, j-k access safe
                        int candidate = dp[i - k][j - k] + k; // z = k er base term

                        if (cnt[i - 1][j - 1] >= k)
                            opt[i][j] = max(candidate, opt[i - 1][j - 1] + 1);
                        else
                            opt[i][j] = candidate;

                        dp[i][j] = max(dp[i][j], opt[i][j]);
                    }
                }
                else
                {
                    cnt[i][j] = 0;
                }
            }
        }

        cout << dp[n][m] << "\n";
    }
    return 0;
}


/*
Sample Input:
3
lovxxelyxxxxx
xxxxxxxlovely
1
lovxxelyxxxxx
xxxxxxxlovely
3
lovxxxelxyxxxx
xxxlovelyxxxxxxx
4
lovxxxelyxxx
xxxxxxlovely
0

Sample Output:
6
7
10
0

https://www.spoj.com/problems/SAMER08D/en/
*/