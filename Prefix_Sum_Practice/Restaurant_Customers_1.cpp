#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n, l, r;
    cin >> n;
    map<ll, int> mp;
    while(n--){
        cin>>l>>r;
        mp[l]++;
        mp[r+1]--;
    }
    for(auto it = mp.begin(); it != mp.end(); it++){
        if(it == mp.begin())continue;
        it->second += prev(it)->second;
    }

    int ans = 0;
    for(auto [key, val]: mp){
        ans = max(ans, val);
    }
    cout<<ans<<endl;
    
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