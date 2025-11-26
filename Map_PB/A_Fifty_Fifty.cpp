#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    int cnt = 0;
    for (auto [key, val] : mp)
    {
        if (val % 2 == 0)
        {
            cnt++;
        }
    }
    if (cnt == 2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}