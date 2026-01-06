#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int h, w;
char grid[1000][1000];
int vist[1000][1000], str[1000][1000];
int cnt = 0;
ll rec_fun(int i, int j)
{

    if (i == h - 1 and j == w - 1)
        return 1;
    if (i == h or j == w)
        return 0;
    if (grid[i][j] == '#')
        return 0;
    if (vist[i][j] == 1)
        return str[i][j];
    ll ans = 0;
    ans += rec_fun(i + 1, j);
    ans += rec_fun(i, j + 1);
    ans %= 1000000007;
    vist[i][j] = 1;
    str[i][j] = ans;
    return ans;
}
void solve()
{

    cin >> h >> w;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
            cin >> grid[i][j];
    }

    cout << rec_fun(0, 0) << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}