#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y, n;
    cin >> x >> y >> n;
    vector<int> v(n + 1);
    v[1] = x;
    v[n] = y;

    for (int i = n - 1; i > 1; i--)
    {
        v[i] = v[i + 1] - (n - i);
    }
    if (v[2] - v[1] >= n - 1)
    {
        for (auto val : v)
            if (val > 0)
            {
                cout << val << " ";
            }
    }
    else
    {
        cout << -1;
    }
    cout << endl;
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