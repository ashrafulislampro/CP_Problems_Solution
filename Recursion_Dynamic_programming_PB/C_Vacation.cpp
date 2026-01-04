#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

template <class T>
inline bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}

int n;
ll a[100010][3];
ll dp[100010][3];

void solve()
{
    n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cin >> a[i][j];
        }
    }

    // Iterative DP
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 3; ++k)
            {
                if (j == k)
                    continue;
                chmax(dp[i + 1][k], dp[i][j] + a[i][k]);
            }
        }
    }

    ll res = 0;
    for (int j = 0; j < 3; ++j)
        chmax(res, dp[n][j]);

    cout << res << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}