#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
ll n;
vector<ll> arr;

const int N = 101;
ll dp[N][N];
ll rec_f(ll i, ll wat){
    if(i == n)return 0;
    if(dp[i][wat] != -1)return dp[i][wat];
    ll ans = 0;
    if(wat) ans = max(ans, 2*arr[i]+rec_f(i+1, wat-1));
    ans = max(ans, arr[i]+rec_f(i+1, wat));
    ans = max(ans, rec_f(i+1, wat+1));

    return dp[i][wat] = ans;
}
void solve()
{
    cin >> n;
    arr.clear();
    arr.resize(n, 0);

    for(auto &x: arr)cin>>x;
    for(ll i = 0; i <= n; i++)
        for(ll j = 0; j <=n; j++)
            dp[i][j] = -1;
    
    cout<<rec_f(0, 0)<<endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}