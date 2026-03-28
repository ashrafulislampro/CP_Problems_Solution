#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n, m;
    cin >> n >> m;

    if(n==m){
        cout<<-1<<endl;
        return;
    }

    map<int, int> mp;
    mp[1] = 1;
    mp[2] = 1;
    mp[3] = 1;

    mp[n]++;
    mp[m]++;

    for(auto [key, val]: mp){
        if(val == 1){
            cout<<key<<endl;
            return;
        }
    }
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37