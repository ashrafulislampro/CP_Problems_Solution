#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, ch = 0, anti_ch = 0, ans = 0;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            ch++;
        else
            anti_ch++;

        if (ch > anti_ch)
            ans++;
    }
    cout << ans << endl;
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