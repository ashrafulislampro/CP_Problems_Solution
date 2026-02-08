#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    string s, t;
    cin >> s>>t;
    int len = t.size();
    for(int i = 0, j = 0; i < len; i++){
        if(s[j]== t[i]){
            j++;
            cout<<i+1<<" ";
        }
    }
}
int main()
{
    ASHRAFUL

    solve();
    return 0;
}