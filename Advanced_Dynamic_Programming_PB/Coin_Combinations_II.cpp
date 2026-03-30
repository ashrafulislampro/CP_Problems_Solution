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
    ll mod = 1e9+7;
    vector<ll> dp(x+1);
    dp[0] = 1;
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= x; j++){
            if(j - arr[i] >= 0)
                dp[j] = (dp[j]+dp[j-arr[i]])%mod;
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