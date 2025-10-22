#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int grid[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> grid[i][j];
        }
    }

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout << grid[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    if (grid[0][0] < grid[0][1] && grid[1][0] < grid[1][1] && grid[0][0] < grid[1][0] && grid[0][1] < grid[1][1])
    {
        cout << "YES" << endl;
        return;
    }
    else
    {

        for (int i = 0; i < 4; i++)
        {
            int tmp, tmp2, tmp3;
            tmp = grid[0][0];
            grid[0][0] = grid[1][0];
            tmp2 = grid[0][1];
            grid[0][1] = tmp;
            tmp3 = grid[1][1];
            grid[1][1] = tmp2;
            grid[1][0] = tmp3;

            if (grid[0][0] < grid[0][1] && grid[1][0] < grid[1][1] && grid[0][0] < grid[1][0] && grid[0][1] < grid[1][1])
            {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
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