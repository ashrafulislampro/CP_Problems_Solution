#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s, t;
    cin >> n;
    cin >> s >> t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    // cout << s << " " << t << endl;
    if (s == t)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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