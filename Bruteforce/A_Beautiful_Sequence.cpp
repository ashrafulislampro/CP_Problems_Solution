#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;
    bool flg = true;
    for (int i = 0; i < n && flg; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (v[j] == i + 1)
            {
                flg = false;
                cout << "YES" << endl;
                return;
            }
        }
    }
    if (flg)
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