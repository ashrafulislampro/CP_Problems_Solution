#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> pre(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> pre[i];

    for (int i = 1; i <= n; i++)
        pre[i] += pre[i - 1];

    ll ans = 0;
    map<ll, int> mp;
    mp[pre[0]]++;

    for (ll i = 1; i <= n; i++)
    {
        ll val = pre[i] - x;
        ans += mp[val];
        mp[pre[i]]++;
    }
    cout << ans << endl;
}
int main()
{
    ASHRAFUL

    solve();
    return 0;
}