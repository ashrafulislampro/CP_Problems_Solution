#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
char mtx[8][8];
int col[8];
int ld[30], rd[30];
int ans = 0;
void rec_fun(int r)
{
    if (r >= 8)
    {
        ans++;
        return;
    }
    for (int c = 0; c < 8; c++)
    {
        if (mtx[r][c] == '*')
            continue;
        if (col[c] == 1)
            continue;
        if (ld[r - c + 7] == 1)
            continue;
        if (rd[r + c] == 1)
            continue;
        col[c] = 1;
        ld[r - c + 7] = 1;
        rd[r + c] = 1;

        rec_fun(r + 1);

        col[c] = 0;
        ld[r - c + 7] = 0;
        rd[r + c] = 0;
    }
}
void solve()
{
    int n = 8, m = 8;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mtx[i][j];
        }
    }
    rec_fun(0);
    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}