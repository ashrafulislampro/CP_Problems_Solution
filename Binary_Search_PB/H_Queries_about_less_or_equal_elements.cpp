#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

void solve()
{
    int n, m, ele;
    cin >> n >> m;
    vector<ll> v(n), arr(m);
    for (auto &x : v)
        cin >> x;
    for (auto &x : arr)
        cin >> x;
    sort(v.begin(), v.end());
    for (int i = 0; i < m; i++)
    {
        int ans = upper_bound(v.begin(), v.end(), arr[i]) - v.begin();
        cout << ans << ' ';
    }
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    // cin >> T;
    while (T--)
        solve();
    return 0;
}