#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x: v)cin>>x;

    if(v[n-1] == -1){
        if(v[0] == -1){
            v[0] = v[n-1] = 0;
        }else{
            v[n-1] = v[0];
        }
    }else if(v[0] == -1){
        v[0] = v[n-1];
    }
    cout<<abs(v[n-1]-v[0])<<endl;
    for(int i = 0; i < n; i++){
        cout<<(v[i]== -1 ? 0 : v[i])<<" ";
    }
    cout<<endl;
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