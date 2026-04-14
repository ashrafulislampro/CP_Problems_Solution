#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

bool isOk(ll mid)
{
    map<ll, ll> mp;
    while (mid > 0)
    {
        ll res = mid % 10;
        mid /= 10;
        mp[res]++;
    }

    if (mp.size() == 2 and mp[4] == mp[7] and mp[4] != 0)
    {
        return true;
    }
    return false;
}
void solve()
{
    ll n;
    cin >> n;

    ll l = n, r = 1e18, mid, ans = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (isOk(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << endl;
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37