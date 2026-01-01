#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long

void solve()
{
    ll n;
    cin >> n;
    for(ll A = 0, B= n; A < n/2; A++, B--){
        bitset<64> bset(A), bsetB(B), bsetN(n);
        if(A+B == n && )
    }
    
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}