#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    ll n, x, y;
    cin >> n >> x;
    vector<pair<ll, ll>> arr;
    for (ll i = 0; i < n; i++)
    {
        cin >> y;
        arr.push_back({y, i + 1});
    }
    sort(arr.begin(), arr.end());
    
    for (ll i = 0; i < n; i++)
    {
        ll target = x - arr[i].first;
        
        for (ll l = i + 1, r = n - 1; l < r;)
        {
            ll val = arr[l].first + arr[r].first;
            
            if (val == target)
            {
                cout << arr[i].second << " " << arr[l].second << " " << arr[r].second;
                return;
            }
            else if (val > target)
            {
                r--;
            }
            else if (val < target)
            {
                l++;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
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