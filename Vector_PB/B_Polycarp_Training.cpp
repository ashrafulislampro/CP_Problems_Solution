#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        v.push_back({x, i});
    }

    sort(v.begin(), v.end(), [](auto &a, auto &b)
         {
        if(a.first == b.first){
            return a.second < b.second;
        }
        return a.first > b.first; });

    if (v[0].first <= v[0].second)
    {
        cout << v[0].first << endl;
    }
    else
    {
        cout << v[0].second << endl;
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