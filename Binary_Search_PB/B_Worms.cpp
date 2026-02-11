#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n;
    cin >> n;
    vector<ll> pre(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> pre[i];
    for (int i = 1; i <= n; i++)
        pre[i] += pre[i - 1];

    int m, x;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        int ans = lower_bound(pre.begin(), pre.end(), x) - pre.begin();

        cout << ans << endl;
    }
}
int main()
{
    ASHRAFUL

    solve();
    return 0;
}