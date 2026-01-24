#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

ll crossSubarraySum(vector<ll>&arr, ll l, ll mid, ll r){
    ll l_s = LLONG_MIN, sum = 0, r_s = LLONG_MIN;
    for(ll i = mid; i >= l; i--){
        sum += arr[i];
        l_s = max(l_s, sum);
    }
    sum = 0;
    for(ll i = mid+1; i <= r; i++){
        sum += arr[i];
        r_s = max(r_s, sum);
    }
    return l_s+r_s;
}
ll maxSubarraySum(vector<ll> &arr, ll l, ll r){
    if(l == r)return arr[l];

    ll mid = (l+r)/2;
    ll left_sm = maxSubarraySum(arr, l, mid);
    ll right_sm = maxSubarraySum(arr, mid+1, r);
    ll cross_sm = crossSubarraySum(arr, l, mid, r);

    return max({left_sm, cross_sm, right_sm});
}
void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    for(auto &x: v)cin>>x;

    cout<<maxSubarraySum(v, 0, n-1)<<endl;
    
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