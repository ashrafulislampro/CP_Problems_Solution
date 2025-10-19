#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int> v(3);
    for(auto &x:v) cin>>x;
    int a = v[0];
    for(int i = 1; i < 3; i++){
        if(a != v[i]){
            cout<<1<<endl;
            return;
        }
    }
    cout<<0<<endl;
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