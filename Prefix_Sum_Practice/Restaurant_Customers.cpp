#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int q;
    cin >> q;
    map<int, int> diff;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        diff[l]++;
        diff[r + 1]--;
    }

    for (auto it = diff.begin(); it != diff.end(); it++)
    {
        if (it == diff.begin())
            continue;
        auto prevIt = prev(it);
        it->second = it->second + prevIt->second;
    }
    
    int ans = 0;
    for (auto it : diff)
    {
        ans = max(ans, it.second);
        // cout << it.first << " = " << it.second << endl;
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