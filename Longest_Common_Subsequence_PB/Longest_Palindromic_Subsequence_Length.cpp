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

int dp[1005][1005];
pair<int, int> next_path[1005][1005];
string str1, str2;
int LCS(int i, int j)
{
    if (i == str1.sz() || j == str2.sz())
    {
        return 0;
    }

    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }

    int ans = 0;
    if (str1[i] == str2[j])
    {
        ans = 1 + LCS(i + 1, j + 1);
        next_path[i][j] = {i + 1, j + 1};
    }
    else
    {
        int ans1 = LCS(i, j + 1);
        int ans2 = LCS(i + 1, j);

        if (ans1 >= ans2)
        {
            next_path[i][j] = {i, j + 1};
        }
        else
        {
            next_path[i][j] = {i + 1, j};
        }
        ans = max(ans1, ans2);
    }

    return dp[i][j] = ans;
}
void path_print(int i, int j)
{
    if (i == str1.sz() || j == str2.sz())
    {
        cout << "\n";
        return;
    }

    if (str1[i] == str2[j])
    {
        cout << str1[i];
    }

    path_print(next_path[i][j].ft, next_path[i][j].sd);
}
void solve()
{
    ll a, b, c, i, j, k, m, n, o, x, y, z;
    cin >> str1;
    str2 = str1;
    reverse(str2.begin(), str2.end());
    n = str1.sz();
    m = str2.sz();

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= m; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout << LCS(0, 0) << "\n";
    path_print(0, 0);
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

/*
Sample Input:
1
abcdabace

Sample Output:
5
abcba

*/