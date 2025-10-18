#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    if (a.second == b.second)
        return a.first > b.first;  // descending order
    return a.second < b.second;   // ascending order
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
        return a.second < b.second; }); // ascending order

    vector<pair<int, int>> pts;
    pts.push_back({pt[0].first, pt[0].second});

    for (int i = 1, j = 0; i < n; i++)
    {
        if (pts[j].second <= pt[i].first)
        {
            pts.push_back({pt[i].first, pt[i].second});
            j++;
        }
    }
    cout << pts.size();
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