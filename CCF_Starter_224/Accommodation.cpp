#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    ll B, G, x, y, N;
    cin >> B >> G >> x >> y >> N;
    ll res = (B+G)/N;
    if((B+G)%N)res++;
    bool pos = true;
    if(B < x * res)pos = false;
    if(G < y * res)pos = false;
    if (pos)
        cout << res << endl;
    else
        cout << -1 << endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}