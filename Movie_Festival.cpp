#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
};

void solve()
{
    int n, a, b;
    cin >> n;
    vector<pair<int, int>> pt;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        pt.push_back({a, b});
    }

    sort(pt.begin(), pt.end(), [](auto &a, auto &b)
         {
        if (a.second == b.second)
            return a.first > b.first;
        return a.second < b.second; });

    for (auto val : pt)
    {
        cout << val.first << " " << val.second << endl;
    }
    // int cnt = 1;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     if (pt[i].second <= pt[i + 1].first)
    //     {
    //         cnt++;
    //     }
    // }
    // cout << cnt << endl;
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