#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, y;
    cin >> n;
    vector<pair<int, pair<string, string>>> v;
    string s1, s2;
    for (int i = 0; i < n; i++)
    {
        cin >> s1 >> s2 >> y;
        v.push_back({y, {s1, s2}});
    }

    sort(v.rbegin(), v.rend(), [](auto &a, auto &b)
         {
             if (a.second.second == b.second.second && a.second.first == b.second.first)
             {
                return a.first < b.first;                 
             }
            else if (a.second.second == b.second.second)
             {               
                return a.second.first > b.second.first;
             }
             return a.second.second > b.second.second; });

    for (auto val : v)
    {
        cout << val.second.first << " " << val.second.second << " " << val.first << endl;
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