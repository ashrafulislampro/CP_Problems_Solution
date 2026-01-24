#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{

    // array size n = 3, arr=[-1,-2,-3]
    // maximum subarray sum = -1
    // n = 5, arr = [1, 11, -100, 20, 30]
    // maximum subarray sum = 50
    
    int n;
    cin >> n;
    vector<ll> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    vector<ll> pre(n + 1);
    for (int i = 1; i <= n; i++)
        pre[i] = pre[i - 1] + v[i];

    ll ans = LLONG_MIN;
    ll mn = 0;
    for (int r = 1; r <= n; r++)
    {
        ll jog = pre[r];
        ll biog = mn;
        ans = max(ans, jog - biog);
        mn = min(mn, pre[r]);
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
    while (T--)
        solve();
    return 0;
}