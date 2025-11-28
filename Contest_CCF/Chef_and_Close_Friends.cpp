#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y, z;
    cin >> x>>y>>z;

    if(z == 0){
        cout<<0<<endl;
        return;
    }

    int cnt = 0;
    for(int i = (x - z); i < (x+z); i++){
        cnt++;
    }
    if(2*y >= cnt){
        cout<<cnt<<endl;
    }else{
        cout<<2*y<<endl;
    }
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