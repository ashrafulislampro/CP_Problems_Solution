#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    ll n, t;
    cin >> n >> t;
    vector<ll> pre(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> pre[i];
   
    for (int i = 1; i <= n; i++)
        pre[i] += pre[i - 1];
    ll mx = 0;
    for (int i = 0; i <= n; i++)
    {
        ll ans = upper_bound(pre.begin(), pre.end(), t + pre[i]) - pre.begin() - i - 1;
        mx = max(ans, mx);
    }

    cout << mx << endl;
}
int main()
{
    ASHRAFUL
    solve();
    return 0;
}