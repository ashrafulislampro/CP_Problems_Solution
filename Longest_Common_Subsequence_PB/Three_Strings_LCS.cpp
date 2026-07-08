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
string str1, str2, str3;
ll dp[105][105][105];
tuple<ll, ll, ll> next_path[105][105][105];

ll LCS(ll i, ll j, ll k)
{
    if (i == str1.sz() || j == str2.sz() || k == str3.sz())
    {
        return 0;
    }

    if (dp[i][j][k] != -1)
        return dp[i][j][k];

    ll ans = 0;

    if (str1[i] == str2[j] and str2[j] == str3[k])
    {
        ans = 1 + LCS(i + 1, j + 1, k + 1);
        next_path[i][j][k] = {i + 1, j + 1, k + 1};
    }
    else
    {
        ll ans1 = LCS(i + 1, j, k);
        ll ans2 = LCS(i, j + 1, k);
        ll ans3 = LCS(i, j, k + 1);

        ans = max({ans1, ans2, ans3});

        if (ans1 == ans)
        {
            next_path[i][j][k] = {i + 1, j, k};
        }
        else if (ans2 == ans)
        {
            next_path[i][j][k] = {i, j + 1, k};
        }
        else
        {
            next_path[i][j][k] = {i, j, k + 1};
        }
    }

    return dp[i][j][k] = ans;
}

void path_print(ll i, ll j, ll k)
{
    if (i == str1.sz() || j == str2.sz() || k == str3.sz())
    {
        cout << "\n";
        return;
    }

    if (str1[i] == str2[j] and str2[j] == str3[k])
    {
        cout << str1[i];
    }
    auto [a, b, c] = next_path[i][j][k];
    path_print(a, b, c);
}
void solve()
{
    ll a, b, c, i, j, k, m, n, o, x, y, z;
    cin >> str1 >> str2 >> str3;
    n = str1.sz();
    m = str2.sz();
    z = str3.sz();

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= m; j++)
        {
            for (k = 0; k <= z; k++)
            {
                dp[i][j][k] = -1;
            }
        }
    }

    cout << LCS(0, 0, 0) << "\n";
    path_print(0, 0, 0);
}
int main()
{
    ASHRAFUL

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
abycde
eabfc
cddddagggb

Sample Output:
2
ab

*/