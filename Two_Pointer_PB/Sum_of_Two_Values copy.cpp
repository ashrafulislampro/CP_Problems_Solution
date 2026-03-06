#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> arr(n + 1);
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        int y;
        cin >> y;
        arr[i] = y;
        mp[y] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        int val = x - arr[i];
        if (mp[val] > 0 && i != mp[val])
        {
            cout << i << " " << mp[val] << endl;
            return;
        }
    }
    cout << "IMPOSSIBLE" << endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    // cin >> T;
    for (int i = 1; i <= T; i++)
    {
        // cout<<"Case #: "<<i<<" ";
        solve();
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37