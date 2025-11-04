#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    for (auto &x : v)
        cin >> x;

    sort(v.begin(), v.end());
    int ans = INT_MAX;
    for (int i = 0; i <= m - n; i++)
    {
        if (v[i + n - 1] - v[i] < ans)
            ans = v[i + n - 1] - v[i];
    }
    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}