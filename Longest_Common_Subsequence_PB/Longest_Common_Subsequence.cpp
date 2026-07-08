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

int scr = 0, cnt = 0;
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
        return dp[i][j];

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
        ans = max(ans1, ans2);

        if (ans == ans1)
        {
            next_path[i][j] = {i, j + 1};
        }
        else
        {
            next_path[i][j] = {i + 1, j};
        }
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
        cout << str1[i] << " " << i + 1 << " " << j + 1 << "\n";
    }
    auto it = next_path[i][j];
    path_print(it.ft, it.sd);
}
void solve(int case_num)
{
    int a, b, c, i, j, k, m, n, o, x, y, z;
    cin >> n >> str1 >> m >> str2;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= m; j++)
        {
            dp[i][j] = -1;
        }
    }
    cnt = 0;
    int val = LCS(0, 0);
    cout << "case " << case_num << " ";
    if (val < 2)
    {
        cout << "N\n";
        return;
    }
    cout << "Y\n";
    cout << val << "\n";
    path_print(0, 0);

    scr++;
}
int main()
{
    ASHRAFUL

    int T = 1;
    cin >> T;
    for (int i = 1; i <= T; i++)
        solve(i);

    cout << "\nScore\n"
         << scr << "\n";
    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37


/*
Sample Input:
3
5 ddacc
3 cac
7 cbbccbc
4 aaca
4 cbeb
5 fdceb


Sample Output:
case 1 Y
2
a 3 2
c 4 3
case 2 N
case 3 Y
3
c 1 3
e 3 4
b 4 5

Score
2


https://www.spoj.com/problems/TLCS/
*/