#include <bits/stdc++.h>
using namespace std;

void solve()
{
    char grid[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> grid[i][j];
        }
    }

    vector<char> v = {'A', 'B', 'C'};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (grid[i][j] == '?')
            {
                if (i == 0)
                {
                    char ch = grid[i + 1][j];
                    char ch1 = grid[i + 2][j];
                    v.erase(remove(v.begin(), v.end(), ch), v.end());
                    v.erase(remove(v.begin(), v.end(), ch1), v.end());
                    cout << v[0] << endl;
                    return;
                }
                else if (i == 1)
                {
                    char ch = grid[i - 1][j];
                    char ch1 = grid[i + 1][j];
                    v.erase(remove(v.begin(), v.end(), ch), v.end());
                    v.erase(remove(v.begin(), v.end(), ch1), v.end());
                    cout << v[0] << endl;
                    return;
                }
                else
                {
                    char ch = grid[i - 1][j];
                    char ch1 = grid[i - 2][j];
                    v.erase(remove(v.begin(), v.end(), ch), v.end());
                    v.erase(remove(v.begin(), v.end(), ch1), v.end());
                    cout << v[0] << endl;
                    return;
                }
            }
        }
    }
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