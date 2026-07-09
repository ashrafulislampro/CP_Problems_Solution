#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
#define ft first
#define sd second
#define pb(x) push_back(x)
#define ph(x) push(x)
#define pp() pop()
#define sz() size()
#define pll pair<ll, ll>

using ll = long long;
const ll inf = (ll)1e18;
const ll N = (ll)3e5 + 5;
const ll mod = (ll)1e9 + 7;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
string str1, str2;
int dp[1005][1005];
int cnt[1005][1005];
pair<int, int> next_path[1005][1005];

int k;
int LCS(int i, int j)
{
    if (i == str1.sz() || j == str2.sz())
    {
        return 0;
    }

    if (dp[i][j] != -1)
        return dp[i][j];

    int ans = 0;
    if (str1[i - 1] == str2[j - 1])
    {
        cnt[i][j] = cnt[i - 1][j - 1] + 1;
        ans = max(LCS(i, j - 1), LCS(i - 1, j));

        if (cnt[i][j] >= k)
        {
            ans = max(LCS(i, j), LCS(i - k, j - k) + k);
        }
    }
    else
    {
        cnt[i][j] = 0;
        ans = max(LCS(i, j - 1), LCS(i - 1, j));
    }

    return dp[i][j] = ans;
}

void path_print(int i, int j)
{
    if (i == str1.sz() || j == str2.sz())
    {
        return;
    }

    if (str1[i] == str2[j])
    {
        cout << str1[i];
    }

    auto it = next_path[i][j];
    path_print(it.ft, it.sd);
}

void solve()

{

    int i, j, m, n;
    cin >> str1 >> str2;
    n = str1.sz();
    m = str2.sz();

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= m; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout << LCS(1, 1) << "\n";
}
int main()
{
    ASHRAFUL

    while (cin >> k)
    {
        if (k == 0)
            break;
        solve();
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37