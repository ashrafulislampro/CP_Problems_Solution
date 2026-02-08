#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n, m, x;
    cin >> n >> m;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mp[x]++;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        auto it = mp.upper_bound(x);
        if (it == mp.begin())
        {
            cout << -1 << endl;
            continue;
        }
        it--;
        cout << it->first << endl;
        mp[it->first]--;
        if (mp[it->first] == 0)
        {
            mp.erase(it);
        }
    }
}
int main()
{
    ASHRAFUL

    solve();
    return 0;
}