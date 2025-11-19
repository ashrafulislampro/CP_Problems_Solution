#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n;

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mp[x]++;
    }
    int ans = 0;
    for (auto [key, val] : mp)
    {
        if (key > val)
        {
            ans += val;
        }
        if (key < val)
        {
            ans += (val - key);
        }
    }
    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}