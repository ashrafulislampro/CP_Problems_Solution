#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n, q, x, y;
    cin >> n >> q;
    vector<ll> p(n), pre_sum(n + 1);

    for (auto &x : p)
        cin >> x;
    // cout << pre_sum[0] << endl;
    sort(p.begin(), p.end());
    for (int i = 0; i < n; i++)
    {
        pre_sum[i + 1] = pre_sum[i] + p[i];
    }

    while (q--)
    {
        cin >> x >> y;
        cout << pre_sum[n - x + y] - pre_sum[n - x] << endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    solve();
    return 0;
}