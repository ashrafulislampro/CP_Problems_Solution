#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int grid[n + 1][n + 1];
    int val = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            grid[i][j] = val;
            val++;
        }
    }
    int mx_val = INT_MIN;
    for (int i = n; i >= 1; i--)
    {

        for (int j = n; j >= 1; j--)
        {
            int tmp = 0;
            tmp += grid[i][j];
            if (i - 1 >= 1)
            {
                tmp += grid[i - 1][j];
            }
            if (i + 1 <= n)
            {
                tmp += grid[i + 1][j];
            }
            if (j + 1 <= n)
            {
                tmp += grid[i][j + 1];
            }
            if (j - 1 >= 1)
            {
                tmp += grid[i][j - 1];
            }

            if (tmp > mx_val)
            {
                mx_val = tmp;
            }
        }
    }
    cout << mx_val << endl;
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