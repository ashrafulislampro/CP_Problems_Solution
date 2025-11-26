#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    vector<string> v(n);
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        v[i] = s;
        if (mp.find(s) != mp.end())
            continue;
        mp[s] = i;
    }
    for (int i = 0; i < n; i++)
    {
        string nam = v[i];
        int val = mp[nam];
        if (val < i)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    solve();
    return 0;
}