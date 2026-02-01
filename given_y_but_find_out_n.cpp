#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

// y = 0+1+2+3+4+5+6+7+8......+n;
// you are given of value y but you have to find out the n...
bool isOk(ll m, ll y)
{
    ll tmp = (m * (m + 1)) / 2;
    if (tmp >= y)
        return 1;
    return 0;
}
void solve()
{
    ll n;
    ll l = 0, r = 1e9;
    ll y;
    cin >> y;
    while (l < r)
    {
        ll mid = l + (r - l) / 2;
        if (isOk(mid, y))
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    n = l;
    if ((n * (n + 1) / 2) == y)
    {
        cout << n << endl;
    }
    else
    {
        cout << "Not found" << endl;
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