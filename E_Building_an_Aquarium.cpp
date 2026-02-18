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
    vector<ll> v(n);
   
    for (auto &y : v)
        cin >> y;

    ll ans, mid, lo = 0, hi = 1e18;
    while(hi >= lo){
        mid = lo + (hi - lo)/2;
        ll sum = 0;
        for(ll i = 0; i < n; i++){
            sum += max(mid - v[i], 0ll);
            if(sum > x)break; 
        }
        if(sum > x){
            hi = mid - 1;
        }else{
            lo = mid + 1;
            ans = mid;
        }
    }

    cout << ans << endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        // cout<<"Case #: "<<i<<" ";
        solve();
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37