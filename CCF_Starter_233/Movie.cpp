#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n, m, a, b, c;
    cin >> n >> m >> a >> b >> c;

    int ans = 0;
    if(n> m){
        int res = n-m;
        ans = (m*c)+(a*res);
        cout<<ans<<endl;
    }else{
         int res = m-n;
        ans = (n*c)+(b*res);
        cout<<ans<<endl;
    }
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
// Coded by Ashraful Islam @ml.ashraful37