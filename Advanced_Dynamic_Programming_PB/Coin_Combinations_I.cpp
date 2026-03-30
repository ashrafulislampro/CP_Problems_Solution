#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for(auto &i: arr)cin>>i;
    vector<ll> dp(x+1);
    dp[0] = 1;
    ll mod = 1e9+7;
    for(int i = 1; i <= x; i++){
        for(int j = 0; j < n; j++){
            if(i - arr[j] >= 0)
                dp[i] = (dp[i]+dp[i-arr[j]])%mod;
        }
    }
    cout<<dp[x]<<endl;
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37