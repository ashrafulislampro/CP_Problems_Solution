#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    ll n, d, m, s;
    cin >> n >> d;
    vector<pair<ll, ll>> arr;
    for (ll i = 1; i <= n; i++)
    {
        cin >> m >> s;
        arr.push_back({m, s});
    }
    sort(arr.begin(), arr.end());

    ll mx = 0, sum = 0, l = 0, r = 0;
    while (l <= r && r < n)
    {

        if (arr[r].first - arr[l].first < d)
        {
            sum += arr[r].second;
            mx = max(mx, sum);
        }
        else
        {
            while (l < r && arr[r].first - arr[l].first >= d)
            {
                sum -= arr[l].second;
                l++;
            }
            sum += arr[r].second;
            mx = max(mx, sum);
        }

        r++;
    }
    cout << mx << endl;
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