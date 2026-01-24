#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int t, op;
    cin >> t >> op;
    vector<int> v(op);
    for (int i = 0; i < op; i++)
    {
        cin >> v[i];
    }

    map<int, int> mp;
    int ans = t;
    for (int i = 0; i < op; i++)
    {
        if (mp[v[i]] == 0)
        {
            ans--;
            mp[v[i]] = 1;
        }
        else
        {
            ans++;
            mp[v[i]] = 0;
        }
    }
    cout << ans << endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    // cin >> T;
    while (T--)
        solve();
    return 0;
}