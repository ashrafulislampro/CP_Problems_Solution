#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int> v(7);
    int cnt0 = 0, cnt1 = 0;
    for(auto &x: v) cin>>x;
    for(auto val: v){
        if(val == 0) cnt0++;
        else cnt1++;
    }
    if(cnt0 > cnt1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    
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