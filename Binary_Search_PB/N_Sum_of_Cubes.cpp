#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
vector<ll> v;

void solve()
{
    ll x;
    cin >> x;
    for (int i = 0; i < (int)v.size(); i++)
    {
        ll b = x - v[i];
        if (b < 0)
            break;
        ll ans = lower_bound(v.begin(), v.end(), b) - v.begin();

        if (b == v[ans])
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    for (ll i = 1; i <= 1e4; i++)
    {
        v.push_back(i * i * i);
    }

    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}