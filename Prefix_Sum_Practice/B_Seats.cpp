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
    string s;
    cin >> s;
    if (n == 1 or n == 2 or (n == 3 and (s[2] == '1' or find(s.begin(), s.end(), '1') == s.end())))
    {
        cout << 1 << endl;
        return;
    }
    if (n == 3 or n == 4)
    {
        cout << 2 << endl;
        return;
    }

    int ans = 0;
    for (int i = 1; i < (int)s.size() - 1; i++)
    {
        if (i - 1 == 0 and s[i - 1] == '1')
            ans++;
        if (s[i - 1] == '0' and s[i + 1] == '0')
        {
            s[i] = '1';
            ans++;
            continue;
        }
        if (s[i] == '1')
            ans++;
    }
    if (s[s.size() - 1] == '1')
        ans++;
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