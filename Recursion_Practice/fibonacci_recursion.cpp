#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long
vector<ll> f(10, -1); // memorization value
ll fibo(ll n){
    if(n == 1) return 0;
    if(n == 2) return 1;
    if(f[n] != -1)  // age calculated kina
        return f[n];
    f[n] = fibo(n-1)+fibo(n-2);  // store the calculated value
    return  f[n];  // return the save value
}
void solve()
{
   cout<<fibo(8)<<endl;    
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    
        solve();
    return 0;
}