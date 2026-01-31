#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    map<int, int> mp;
    int ans = INT_MIN, tmp = 0;
    for (int i = 0; i < n; i++)
    {
        ++tmp;
        if (mp[v[i]] != 0)
        {
            tmp -= 2;

            mp[v[i]]--;
            continue;
        }

        mp[v[i]]++;
        if (tmp > ans)
            ans = tmp;
    }
    cout << ans << endl;
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