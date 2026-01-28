#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    string s;
    cin >> s;
    int n = s.size(), x;
    s = '.' + s;
    vector<int> pre(n + 1);
    for (int i = 1; i <= n; i++)
    {
        pre[i] = s[i] - '0';
    }
    // vector<int> pre(n + 1);
    for (int i = 1; i <= n; i++)
    {
        pre[i] += pre[i - 1];
    }

    int ans = min(pre[n], n - pre[n]);
    for (int i = 1; i <= n; i++)
    {
        ans = min({ans, pre[i] + n - i - (pre[n] - pre[i]), i - pre[i] + pre[n] - pre[i]});
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