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
string str1, str2, virus;
ll dp[105][105][105];
tuple<ll, ll, ll> next_path[105][105][105];
ll LCS(int i, int j, int k)
{
    if (i == str1.sz() || j == str2.sz() || k == virus.sz())
    {
        return 0;
    }
    if (dp[i][j][k] != -1)
        return dp[i][j][k];

    ll ans = 0;
    if (str1[i] == str2[j] and str2[j] != )
    {
        ans = 1 + LCS(i + 1, j + 1);
        next_path[i][j] = {i + 1, j + 1};
    }
    else
    {
        ll ans1 = LCS(i + 1, j);
        ll ans2 = LCS(i, j + 1);

        ans = max(ans1, ans2);
        if (ans == ans1)
        {
            next_path[i][j] = {i + 1, j};
        }
        else
        {
            next_path[i][j] = {i, j + 1};
        }
    }
    return dp[i][j] = ans;
}
// path printing
string ss = "";
void path_print(int i, int j, int k)
{
    if (i == str1.sz() || j == str2.sz())
    {
        return;
    }
    if (str1[i] == str2[j])
    {
        ss += str1[i];
    }
    auto it = next_path[i][j];
    // path_print(it.ft, it.sd);
}

void solve()
{
    ll a, b, c, i, j, k, m, n, o, x, y, z;
    cin >> str1 >> str2 >> virus;
    n = str1.sz();
    m = str2.sz();
    z = virus.sz();

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= m; j++)
        {
            for (k = 0; k <= z; k++)
                dp[i][j][k] = -1;
        }
    }

    ll val = LCS(0, 0, 0);
    path_print(0, 0, 0);

    // if (ss == virus)
    // {
    //     cout << 0 << "\n";
    //     return;
    // }
    // auto pos = ss.find(virus);
    // while (pos != string::npos)
    // {
    //     ss.erase(ss.begin() + pos, ss.begin() + pos+1);
    //     pos = ss.find(virus);
    // }
    // cout << ss.sz() << "\n";
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37