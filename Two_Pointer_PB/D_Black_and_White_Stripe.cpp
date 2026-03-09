#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin>>s;
    int mn = INT_MAX;
    int l = 0, r = 0, cnt = 0;
    while(l <= r && r < n){
        if(s[r] == 'W')cnt++;
        if(l > 0 && s[l-1] == 'W')cnt--;

        if(r-l+1 == k){
            mn = min(mn, cnt);
            l++;
        }
        r++;
    }
    cout<<mn<<endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        // cout<<"Case #: "<<i<<" ";
        solve();
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37