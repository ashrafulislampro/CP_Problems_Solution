#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long

void solve()
{
    int n, x, k, p;
    cin >> n >> x>>k>>p;
    if(k == 0){
        cout<<p<<endl;
    }else{
        if(k < x){
            cout<<(p + 10*(x - k))<<endl;
        }else if(k > x && k < n){
            cout<<(p+(10* x)+ (5 * (k - x)))<<endl;
        }else{
            cout<<(p+(10* x)+(5 * (k-x))+20)<<endl;
        }
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