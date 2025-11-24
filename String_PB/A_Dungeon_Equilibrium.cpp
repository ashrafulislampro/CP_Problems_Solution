#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n;
    map<int, int>mp;
    for(int i = 0; i < n; i++){
        cin>>x;
        mp[x]++;
    }
    int cnt = 0;
    for(auto [key, val]: mp){
        if(key > val){
            cnt += val;
        }
        if(key < val){
            cnt += (val-key);
        }
    }
    cout<<cnt<<endl;
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