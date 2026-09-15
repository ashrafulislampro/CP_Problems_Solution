#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    char grid[n][4];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> grid[i][j];
        }
    }
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (grid[i][j] == '#')
            {
                v.push_back(j + 1);
            };
        }
    }
    reverse(v.begin(), v.end());
    for (auto val : v)
        cout << val << " ";
    cout << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}