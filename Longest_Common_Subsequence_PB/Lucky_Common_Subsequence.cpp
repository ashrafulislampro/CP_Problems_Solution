#include <bits/stdc++.h>
using namespace std;
string a, b, c;
string dp[111][111][111];
int f[111];
void check(string &a, string b)
{
    if (a.size() < b.size())
        a = b;
}
main()
{
    cin >> a >> b >> c;
    int l1 = a.size(), l2 = b.size(), l3 = c.size();
    int j = 0, i, k;
    for (i = 1; i < l3; i++)
    {
        while (j > 0 && c[i] != c[j])
            j = f[j - 1];
        if (c[i] == c[j])
            f[i] = ++j;
    }
    for (i = 1; i <= l1; i++)
    {
        for (j = 1; j <= l2; j++)
        {
            for (k = 0; k < l3; k++)
            {
                if (a[i - 1] == b[j - 1])
                {
                    char cur = a[i - 1];
                    int t = k;
                    while (t > 0 && cur != c[t])
                        t = f[t - 1];
                    if (cur == c[t])
                        t++;
                    check(dp[i][j][t], dp[i - 1][j - 1][k] + cur);
                }
                check(dp[i][j][k], dp[i - 1][j][k]);
                check(dp[i][j][k], dp[i][j - 1][k]);
            }
        }
    }
    string ans = "";
    for (i = 0; i < l3; i++)
    {
        check(ans, dp[l1][l2][i]);
    }
    if (ans.size() == 0)
        printf("0\n");
    else
        printf("%s\n", ans.c_str());
}

// https://codeforces.com/contest/346/problem/B