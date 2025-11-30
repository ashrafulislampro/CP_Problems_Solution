#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, h, m, s;
    cin >> n;
    vector<pair<int, pair<int, int>>> v;

    for (int i = 0; i < n; i++)
    {
        cin >> h >> m >> s;
        v.push_back({h, {m, s}});
    }
    sort(v.begin(), v.end());
    for (auto val : v)
    {
        cout << val.first << " " << val.second.first << " " << val.second.second << endl;
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