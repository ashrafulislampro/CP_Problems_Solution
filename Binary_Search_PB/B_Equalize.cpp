#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    ll n, i;
    cin >> n;
    vector<ll> v(n);
    for (auto &x : v)
        cin >> x;
    sort(v.begin(), v.end());

    vector<ll> b = {v[0]};
    for (i = 1; i < n; i++)
    {
        if (v[i] != v[i - 1])
            b.push_back(v[i]);
    }
    ll ans = 0;
    for (i = 0; i < b.size(); i++)
    {
        ans = max(ans, upper_bound(b.begin(), b.end(), (b[i] + n - 1)) - b.begin() - i);
    }
    cout << ans << endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll T = 1;
    cin >> T;
    for (ll i = 1; i <= T; i++)
    {
        // cout<<"Case #: "<<i<<" ";
        solve();
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37