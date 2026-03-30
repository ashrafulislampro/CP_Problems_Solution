#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n, m, b;
    cin >> n >> m>>b;
    ll mod;
    cin>>mod;

    vector<int> arr(n);
    for(auto &x: arr)cin>>x;

    vector<ll> dp(501);
    dp[0] = 1;

    // Not working.
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j <= b; j++){
    //         if(i - arr[j] >= 0)
    //             dp[i] = (dp[i]+dp[i-arr[j]])%mod;
    //     }
    // }
    cout<<dp[n]<<endl;
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37