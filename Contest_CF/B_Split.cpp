#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n, x;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> x;
        mp[x]++;
    }
    int ans = 0, bias = 0, subbias = 0;
    for (auto &it : mp)
    {
        if (it.second & 1) // odd frequency
        {
            ans += 1;
            subbias++;
        }
        else
        { // even frequency
            int half = it.second / 2;
            if (half & 1)
            {
                ans += 2;
            }
            else
            {
                ans += 2;
                bias ^= 1;
            }
        }
    }
    if (subbias >= 2)
        bias = 0;
    cout << ans - bias * 2 << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}