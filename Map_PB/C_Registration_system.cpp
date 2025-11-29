#include <bits/stdc++.h>
using namespace std;
map<string, int> mp;
void solve()
{
    string s;
    cin >> s;
    if (!mp.count(s))
    {
        mp[s]++;
        cout << "OK" << endl;
    }
    else
    {
        cout << s << mp[s] << endl;
        mp[s]++;
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