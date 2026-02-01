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
    vector<ll> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    vector<ll> pre(n + 1);
    for (int i = 1; i <= n; i++)
        pre[i] = pre[i - 1] + v[i];

    int q, x;
    cin >> q;
    while (q--)
    {
        cin >> x;
        int l = lower_bound(pre.begin(), pre.end(), x) - pre.begin();
        cout << l << endl;
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