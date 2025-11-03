#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, ans, tmp;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    ans = v[n - 1] - v[0];
    for (int i = 1; i < n; i++)
    {
        tmp = v[i - 1] - v[i];
        if (tmp > ans)
            ans = tmp;
    }
    for (int i = 1; i < n; i++)
    {
        tmp = v[i] - v[0];
        if (tmp > ans)
            ans = tmp;
    }
    for (int i = 0; i < n - 1; i++)
    {
        tmp = v[n - 1] - v[i];
        if (tmp > ans)
            ans = tmp;
    }
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