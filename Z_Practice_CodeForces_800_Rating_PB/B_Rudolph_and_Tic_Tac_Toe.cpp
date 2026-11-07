#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n = 3;
    char grid[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }
    // Horizontal
    for (int i = 0; i < n; i++)
    {
        char ch = grid[i][0];
        int cnt = 0;
        if (ch == '.')
            continue;
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == ch)
                cnt++;
        }
        if (cnt == 3)
        {
            cout << ch << endl;
            return;
        }
    }
    // vertical
    for (int i = 0; i < n; i++)
    {
        char ch = grid[0][i];
        int cnt = 0;
        if (ch == '.')
            continue;
        for (int j = 0; j < n; j++)
        {
            if (grid[j][i] == ch)
                cnt++;
        }
        if (cnt == 3)
        {
            cout << ch << endl;
            return;
        }
    }
    // diagonal-backward.
    int cnt = 0;
    char ch = grid[0][0];
    if (ch != '.')
    {
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (grid[i][i] == ch)
                cnt++;
        }
        if (cnt == 3)
        {
            cout << ch << endl;
            return;
        }
    }
    // diagonal-forward.
    ch = grid[0][n - 1];
    if (ch != '.')
    {
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (grid[i][n - 1 - i] == ch)
                cnt++;
        }
        if (cnt == 3)
        {
            cout << ch << endl;
            return;
        }
    }
    cout << "DRAW" << endl;
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