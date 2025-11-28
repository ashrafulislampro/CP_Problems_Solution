#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, mx = INT_MIN;
    cin >> n;
    map<string, int> mp;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        mp[s]++;
        if (mp[s] > mx)
        {
            mx = mp[s];
        }
    }

    for (auto [key, val] : mp)
    {
        if (val == mx)
            cout << key << endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}