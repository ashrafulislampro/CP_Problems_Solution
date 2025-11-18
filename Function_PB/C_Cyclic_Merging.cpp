#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    for (auto &x : v)
        cin >> x;

    ll sum = 0, mx = 0, c;
    for (int i = 0; i < n; i++)
    {
        c = max(v[i], v[(i + 1) % n]);
        sum += c, mx = max(mx, c);
    }
    cout << sum - mx << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}