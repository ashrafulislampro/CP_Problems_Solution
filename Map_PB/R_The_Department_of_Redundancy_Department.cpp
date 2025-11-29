#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    map<int, int> mp;
    vector<int> v;
    while (cin >> n)
    {
        if (find(v.begin(), v.end(), n) == v.end())
        {
            v.push_back(n);
        }
        mp[n]++;
    };
    for (auto key : v)
    {
        cout << key << " " << mp[key] << endl;
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