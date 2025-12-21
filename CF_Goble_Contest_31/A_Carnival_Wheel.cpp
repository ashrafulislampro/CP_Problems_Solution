#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int l, a, b;
    cin >> l>>a>>b;
    int mx_price = INT_MIN;
    for(int i = 0; i < l; i++){
        int mod = (a + i * b) % l;
        if(mod > mx_price)
            mx_price = mod;
    }
    cout<<mx_price<<endl;
    
}
int main()
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