#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

ll nc2(ll n)
{
    if (n < 2)
        return 0;
    return (n * (n - 1) / 2);
}
void solve()
{
    ll n, d;
    cin >> n >> d;
    vector<ll> arr(n);
    for (auto &x : arr)
        cin >> x;

    ll ans = 0;
    for (int l = 0, r = 2; r < n; r++)
    {
        while (arr[r] - arr[l] > d)
            l++;
        ans += nc2(r - l);
    }
    cout << ans << endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    // cin >> T;
    for (int i = 1; i <= T; i++)
    {
        // cout<<"Case #: "<<i<<" ";
        solve();
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37