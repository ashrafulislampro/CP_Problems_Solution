#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
    {
        return a.second < b.second;
    }
    return a.first < b.first;
}
void solve()
{
    int n, k, x;
    cin >> n >> k;
    vector<pair<int, int>> pt;
    vector<int> b(n), ans(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        pt.push_back({x, i});
    }

    for (auto &x : b)
        cin >> x;

    sort(pt.begin(), pt.end(), cmp);
    sort(b.begin(), b.end());
    
    
    int tmp, day;
    for (int i = 0; i < n; i++)
    {
        tmp = b[i];
        day = pt[i].second;
        ans[day] = tmp;
    }
    for (auto val : ans)
        cout << val << " ";
    cout << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}