#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (auto &x : v)
        cin >> x;
    ll low = 0, high = 0, ans, tmp, mid, cnt;
    for(int i = 0;i < n; i++){
        low = max(low, v[i]);
        high += v[i];
    }
    while(high >= low){
        mid = low+(high-low)/2;
        tmp = 0,cnt = 1;
        for(int i = 0;i < n; i++){
            tmp += v[i];
            if(tmp > mid){
                cnt++;
                tmp= v[i];
            }
        }
        
        if(cnt > k){
            low = mid+1;
        }else{
            high = mid - 1;
            ans = mid;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    ASHRAFUL

    solve();
    return 0;
}