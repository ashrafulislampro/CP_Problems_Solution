#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    // if (a.first == b.first)
    // {
    //     return a.first < b.first;
    // }
    return a.first <= b.first;
}
void solve()
{
    vector<pair<int, int>> pt(4);

    for (auto &[x, y] : pt)
        cin >> x >> y;

    sort(pt.begin(), pt.end(), cmp);
    int x1 = pt[0].first, y1 = pt[0].second, x2 = pt[1].first, y2 = pt[1].second;
    int a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    cout << a * a << endl;
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