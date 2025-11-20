#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n = 8;
    vector<vector<char>> v(n, vector<char>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }
    char ans;
    for (int i = 0; i < n; i++)
    {
        int r = 0;
        for (int j = 0; j < n; j++)
        {
            if (v[i][j] == 'R')
                r++;
        }
        // cout << r << endl;
        if (r == 8)
            ans = 'R';
    }
    // cout << endl;
    for (int i = 0; i < n; i++)
    {
        int b = 0;
        for (int j = 0; j < n; j++)
        {
            if (v[j][i] == 'B')
                b++;
        }
        // cout << b << endl;
        if (b == 8)
            ans = 'B';
    }

    // cout << endl;
    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}