#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, mx = INT_MIN, x;
    cin >> n;
    map<int, int> mp;
    for(int i = 0; i <n; i++){
        cin>>x;
        mp[x]++;
    }

    for(auto [key, val]: mp){
        if(val> mx){
            mx = val;
        }
    }
    cout<<mx<<endl;
    
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}