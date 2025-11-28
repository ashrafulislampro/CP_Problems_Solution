#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, t;
    cin >> n;
    map<pair<int, int>, string> mp;
    int c1, c2;
    string name;
    for (int i = 0; i < n; i++)
    {
        cin >> c1 >> c2 >> name;
        mp[{c1, c2}] = name;
    }
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> c1 >> c2;
        cout << mp[{c1, c2}] << endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}