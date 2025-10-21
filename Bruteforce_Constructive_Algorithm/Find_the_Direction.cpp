#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<string> v = {"East", "South", "West", "North"};
    for (int i = 1, j = 0; i <= n; i++, j++)
    {
        if (j == 4) // 1-E, 2-s, 3-w, 4-n, 5-E, 6-S
            j = 0;

        if (i == n)
        {
            cout << v[j] << endl;
            return;
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